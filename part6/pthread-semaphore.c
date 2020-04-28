#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

#define NB_CONSUMERS 5

pthread_barrier_t barrier;
sem_t sem;
int value;

void* start_consumer(void* vnumber) {
    int* number = (int*) vnumber;

    while(1) {
      sem_wait(&sem);
      printf("Thread number %d receives value %d\n", *number, value);
    }
    return NULL; 
}

void* start_producer(void* arg) {
    while(1) {
      int r = random() % 10;
      sleep(r);
      value = random() % 10;
      printf("Producer produces value %d\n", value);
      sem_post(&sem);
    }
}

int main(int argc, char* argv[]) {
    pthread_t consumers[NB_CONSUMERS];
    pthread_t producer;

    int consumers_id[NB_CONSUMERS];

    for (int i = 0 ; i < NB_CONSUMERS ; i++) {
       consumers_id[i] = 1 + i;

       if (pthread_create(&consumers[i], NULL, start_consumer, &consumers_id[i])) {
           printf("error when creating thread %d\n", i);
       }
    }

    if(pthread_create(&producer, NULL, start_producer, NULL)) {
        printf("failed to start produced \n");
    }

    for(int i = 0 ; i < NB_CONSUMERS ; i++) {
        pthread_join(consumers[i], NULL);
    }

    pthread_join(producer, NULL);

    return 0;
}

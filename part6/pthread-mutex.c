#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>

#define NB_THREADS 3

int value = 0;
pthread_mutex_t mutex;

void* start_thread_with_mutex(void* vnumber) {
    int* number = (int*) vnumber;

    while(1) {
        int r = random() % 2;
        sleep(r);
        if(pthread_mutex_lock(&mutex)) {
            printf("mutex lock\n");
        }
        value = value + 1;
        r = random() % 2;
        value = value - 1;
        if(pthread_mutex_unlock(&mutex)) {
            printf("mutex unlock\n");
        }
        printf("Thread %d, value: %d\n", *number, value);

    }
    return NULL; 
}

void* start_thread_without_mutex(void* vnumber) {
    int* number = (int*) vnumber;


    while(1) {
        int r = random() % 2;
        sleep(r);
        value = value + 1;
        r = random() % 2;
        value = value - 1;
        printf("Thread %d value: %d\n", *number, value);

    }
    return NULL; 
}


int main(int argc, char* argv[]) {
    pthread_t threads[NB_THREADS];
    int threads_id[NB_THREADS];

    if(pthread_mutex_init(&mutex, NULL)) {
        printf("mutex init error\n");
    }

    for (int i = 0 ; i < NB_THREADS ; i++) {
        threads_id[i] = 1 + i;

       if (pthread_create(&threads[i], NULL, start_thread_without_mutex, &threads_id[i])) {
           printf("error when creating thread %d\n", i);
       }
    }

    for(int i = 0 ; i < NB_THREADS ; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}

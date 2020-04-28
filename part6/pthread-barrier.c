#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>

#define NB_THREADS 3

pthread_barrier_t barrier;

void* start_thread(void* vnumber) {
    int* number = (int*) vnumber;
    int r = random() % 10;
    printf("Thread number %d, sleeping %d seconds \n", *number, r);
    sleep(r);

    printf("Thread number %d waiting for the barrier\n", *number);

    pthread_barrier_wait(&barrier);

    printf("Thread number %d passed the barrier\n", *number);
    return NULL; 
}

int main(int argc, char* argv[]) {
    pthread_t threads[NB_THREADS];
    int threads_id[NB_THREADS];

    if(pthread_barrier_init(&barrier, NULL, NB_THREADS)) {
        printf("error when creating barrier\n");
    }

    for (int i = 0 ; i < NB_THREADS ; i++) {
        threads_id[i] = 1 + i;

       if (pthread_create(&threads[i], NULL, start_thread, &threads_id[i])) {
           printf("error when creating thread %d\n", i);
       }
    }

    for(int i = 0 ; i < NB_THREADS ; i++) {
        pthread_join(threads[i], NULL);
    }

    if(pthread_barrier_destroy(&barrier)) {
        printf("error when destroying the barrier\n");
    }
    return 0;
}

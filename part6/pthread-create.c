#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <unistd.h>

#define NB_THREADS 3

void* start_thread(void* vnumber) {
    int* number = (int*) vnumber;
    for(int i = 0 ; i < 3 ; i++ ) {
        int r = random() % 10;
        printf("Thread number %d, loop %d sleeping %d seconds \n", *number, i, r);
        sleep(r);
    }
    return NULL; 
}

int main(int argc, char* argv[]) {
    pthread_t threads[NB_THREADS];
    int threads_id[NB_THREADS];

    for (int i = 0 ; i < NB_THREADS ; i++) {
        threads_id[i] = 1 + i;

       if (pthread_create(&threads[i], NULL, start_thread, &threads_id[i])) {
           printf("error when creating thread %d\n", i);
       }
    }

    for(int i = 0 ; i < NB_THREADS ; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}

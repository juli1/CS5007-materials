#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

#define MSG_SIZE 1024

char message[MSG_SIZE];
pthread_mutex_t mutex;
pthread_cond_t cond;
pthread_t thread_consumer;
pthread_t thread_producer;

void* start_consumer(void* unused) {
    while(1) {
        if(pthread_mutex_lock(&mutex)) {
            printf("error while mutex lock \n");
        }

        if(pthread_cond_wait(&cond, &mutex)) {
            printf("error cond_wait\n");
        }

        printf("consumer received %s\n", message);

        memset(message, 0, MSG_SIZE);

        if(pthread_mutex_unlock(&mutex)) {
            printf("error while mutex lock \n");
        }

    }
    return NULL;
}

void* start_producer(void* unused) {
    while(1) {
        fscanf(stdin, "%s", message);

        if(strncmp(message, "quit", 4) == 0) {
            if(pthread_cancel(thread_consumer)) {
                printf("error pthread_cancel()\n");
            }
            if (pthread_cancel(thread_producer)) {
                printf("error pthread_cancel()\n");
            }
        }

        pthread_cond_signal(&cond);

    }
    return NULL;
}


int main(int argc, char* argv[]) {

    memset(message, 0, MSG_SIZE);

    if(pthread_mutex_init(&mutex, NULL)) {
        printf("mutex init error\n");
    }

    if(pthread_cond_init(&cond, NULL)) {
        printf("conf init failed\n");
    }

    if (pthread_create(&thread_producer, NULL, start_producer, NULL)) {
       printf("error when creating thread producer\n");
    }

    if (pthread_create(&thread_consumer, NULL, start_consumer, NULL)) {
       printf("error when creating thread consumer\n");
    }

    if(pthread_join(thread_producer, NULL)) {
        printf("error pthread_join producer\n");
    }

    if(pthread_join(thread_consumer, NULL)) {
        printf("error pthread_join consumer\n");
    }

    printf("program finished\n");

    return 0;
}

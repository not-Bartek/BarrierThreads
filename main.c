#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define ERR(source) (perror(source), fprintf(stderr, "%s:%d\n", __FILE__, __LINE__), exit(EXIT_FAILURE))

#define PLAYER_COUNT 4
#define ROUNDS 10

struct arguments
{
    int id;
    unsigned int seed;
    int* scores;
    int* rolls;
    pthread_barrier_t *barrier;
};

int main() {
    return 0;
}
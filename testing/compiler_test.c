#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char** argv) {
    while (1) {
        int now = time(NULL);
        printf("Time now is %d\n", now);
        srand(now);
        int random = rand();
        printf("Random number generated is %d\n", random);
        sleep(1);
    }
}

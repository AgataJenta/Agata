#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
#define PROBY 5
 
int main(void)
{
    int i;
 
    srand((unsigned int) time(NULL));
    for (i = 0; i < PROBY; ++i) {
        if ((double) rand() / (RAND_MAX + 1.0) < 0.5) {
            printf("orzeł\n");
        } else {
            printf("reszka\n");
        }
    }
    return 0;
}
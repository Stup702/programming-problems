#include <stdio.h>
#include <stdlib.h>
#include <time.h>    // for the time() call

void rando()
{
    srand(time(NULL));

    int i;
    while(i!=50){
        printf("%d\n", i=rand() % 100);
        }
}
int main()
{
    // Calculate the time taken by fun()
    clock_t t;
    t = clock();
    rando();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("rando() took %f seconds to execute \n", time_taken);
    return 0;
}

// print Hello world from Multiple threads

// omp header prototype for various omp functions
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    // specify the block to be excecuted in parallel a compiler directive
    #pragma omp parallel
    {

        printf("Hello World from thread %d\n", omp_get_thread_num());
    }

return 0;
}
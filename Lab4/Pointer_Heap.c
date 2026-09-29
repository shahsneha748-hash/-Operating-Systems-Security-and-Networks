#include <stdio.h>
#include <stdlib.h>

int main() {
    int *forheap; 

    forheap = (int *)malloc(sizeof(int)); 

    *forheap = 30; 

    // Print addresses
    printf("Address of pointer (STACK): %p\n", (void *)&forheap);
    printf("Address of data (HEAP): %p\n", (void *)forheap);
    printf("Value stored: %d\n", *forheap);

    free(forheap); // Free the HEAP memory

    return 0;
}

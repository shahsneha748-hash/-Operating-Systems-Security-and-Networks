#include <stdio.h>
#include <stdlib.h>

int global_initialized = 100;  // Data segment
int global_uninitialized;       // BSS segment

int main() {
    int local_variable = 20;    // Stack segment

    int *heap_variable = malloc(sizeof(int));  // Heap segment
    *heap_variable = 30;

    printf("Data segment address:  %p\n", (void *)&global_initialized);
    printf("BSS segment address:   %p\n", (void *)&global_uninitialized);
    printf("Stack segment address: %p\n", (void *)&local_variable);
    printf("Heap segment address:  %p\n", (void *)heap_variable);

    long difference = (char *)&local_variable - (char *)heap_variable;

    printf("Address difference between Stack and Heap: %ld bytes\n",
           difference);

    free(heap_variable);

    return 0;
}

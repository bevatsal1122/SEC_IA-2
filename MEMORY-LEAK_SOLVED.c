#include <stdio.h>
#include <stdlib.h>

void createMemoryLeak() {
    int *leakyPtr = (int *)malloc(sizeof(int) * 100);

    for (int i = 0; i < 10; i++) {
        leakyPtr[i] = i * 10;
    }
    
    free(leakyPtr);
}

int main() {
    printf("Demonstrating memory leak...\n");

    for (int i = 1; i <= 2500000; i++) {
        createMemoryLeak();

        if (i % 100000 == 0) {
            printf("[Iteration %d] Memory still allocated but not freed!\n", i);
        }
    }

    printf("Memory leak simulation complete.\n");
    return 0;
}
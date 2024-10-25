#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 42;  
    printf("Value before freeing: %d\n", *ptr);

    free(ptr);
    printf("Memory freed.\n");

   
    printf("Value after freeing (undefined behavior): %d\n", *ptr);

    return 0;
}

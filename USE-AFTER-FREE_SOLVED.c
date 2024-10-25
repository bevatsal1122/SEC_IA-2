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
    ptr = NULL;  

    
    if (ptr != NULL) {
        printf("Value after freeing: %d\n", *ptr); 
    } else {
        printf("Pointer is NULL, safe to avoid use-after-free.\n");
    }

    return 0;
}
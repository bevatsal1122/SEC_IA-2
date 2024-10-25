#include <stdio.h>
#include <stdlib.h>

int* allocate_memory(int size) {
    if (size <= 0) {
        return NULL;
    }
    return (int*)malloc(size * sizeof(int));
}

void process_data(int *data) {
    data[0] = 100;
    printf("Data[0]: %d\n", data[0]);
}

int main() {
    int *data = allocate_memory(0);

    process_data(data);

    free(data);
    return 0;
}

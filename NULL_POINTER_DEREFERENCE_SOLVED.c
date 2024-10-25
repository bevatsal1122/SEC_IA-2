#include <stdio.h>
#include <stdlib.h>

int* allocate_memory(int size) {
    if (size <= 0) {
        return NULL;
    }
    return (int*)malloc(size * sizeof(int));
}

void process_data(int *data) {
    if (data == NULL) {
        printf("Error: Null pointer passed to process_data.\n");
        return;
    }
    data[0] = 100;
    printf("Data[0]: %d\n", data[0]);
}

int main() {
    int *data = allocate_memory(0);

    process_data(data);

    if (data != NULL) {
        free(data);
    }

    return 0;
}

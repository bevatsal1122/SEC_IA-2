#include <stdio.h>
#include <string.h>

void vulnerableFunction(char *userInput) {
    char buffer[10];  
    printf("Buffer address: %p\n", (void *)buffer);

   
    strcpy(buffer, userInput); 

    printf("Buffer content: %s\n", buffer);
    printf("Vulnerable function executed successfully!\n");
}

int main() {
    char longInput[50];  
    memset(longInput, 'A', 49); 
    longInput[49] = '\0';  
    printf("Calling vulnerable function with long input...\n");
    vulnerableFunction(longInput);

    return 0;
}

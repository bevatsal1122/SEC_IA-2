#include <stdio.h>

void log_message(char *user_input) {
    printf("%s\n", user_input);
}

int main() {
    char user_input[100];
    
    printf("Enter a message: ");
    fgets(user_input, sizeof(user_input), stdin);
    
    log_message(user_input);

    return 0;
}

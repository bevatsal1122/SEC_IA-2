#include <stdio.h>
#include <limits.h>

int main() {
    int positiveOverflow = INT_MAX;  
    int negativeUnderflow = INT_MIN;

    printf("Before Overflow: %d\n", positiveOverflow);
    positiveOverflow += 1; 
    printf("After Overflow: %d\n", positiveOverflow);

    printf("Before Underflow: %d\n", negativeUnderflow);
    negativeUnderflow -= 1; 
    printf("After Underflow: %d\n", negativeUnderflow);

    return 0;
}

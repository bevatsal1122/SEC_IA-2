#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool safeAdd(int a, int b, int *result) {
    if ((b > 0) && (a > INT_MAX - b)) {
        return false;
    }
    if ((b < 0) && (a < INT_MIN - b)) {
        return false;
    }
    *result = a + b;
    return true;
}

bool safeSubtract(int a, int b, int *result) {
    if ((b > 0) && (a < INT_MIN + b)) {
        return false;
    }
    if ((b < 0) && (a > INT_MAX + b)) {
        return false;
    }
    *result = a - b;
    return true;
}

int main() {
    int positiveOverflow = INT_MAX;
    int negativeUnderflow = INT_MIN;
    int result;

    printf("Attempting safe addition...\n");
    if (safeAdd(positiveOverflow, 1, &result)) {
        printf("Result: %d\n", result);
    } else {
        printf("Overflow detected! Addition aborted.\n");
    }

    printf("Attempting safe subtraction...\n");
    if (safeSubtract(negativeUnderflow, 1, &result)) {
        printf("Result: %d\n", result);
    } else {
        printf("Underflow detected! Subtraction aborted.\n");
    }

    return 0;
}

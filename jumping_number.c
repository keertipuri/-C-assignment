//C program to print largest three digit jumping number.
#include <stdio.h>
#include<stdlib.h>
// Function to check if a number is a jumping number
int isJumpingNumber(int num) {
    int digit1, digit2;

    while (num > 0) {
        digit1 = num % 10;
        num /= 10;

        if (num == 0) {
            return 1; // It's a one-digit number, so it's a jumping number
        }

        digit2 = num % 10;

        if (abs(digit1 - digit2) != 1) {
            return 0; // Not a jumping number
        }
    }

    return 1; // It's a jumping number
}

int main() {
    int largestJumpingNumber = 0;

    // Iterate through three-digit numbers in reverse order
    for (int i = 999; i >= 100; --i) {
        if (isJumpingNumber(i)) {
            largestJumpingNumber = i;
            break;
        }
    }

    if (largestJumpingNumber != 0) {
        printf("Largest three-digit jumping number: %d\n", largestJumpingNumber);
    } else {
        printf("No three-digit jumping number found.\n");
    }

    return 0;
}

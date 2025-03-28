#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf_s("%d", &number);

    printf("Last digit: %d\n", number % 10);

    return 0;
}


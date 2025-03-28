#include <stdio.h>

int main() {
    int num;

    // Зчитуємо тризначне число
    printf("Enter a three-digit number: ");
    scanf_s("%d", &num);

    // Виводимо число у зворотному порядку
    printf("Reversed number: %d\n", (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100));

    return 0;
}

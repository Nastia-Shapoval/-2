#include <stdio.h>

int main() {
    int quantity;
    double price, total;

    printf("Enter the number of items: ");
    scanf_s("%d", &quantity);

    printf("Enter the price per unit: ");
    scanf_s("%lf", &price);

    total = quantity * price;

    printf("Total purchase cost: %.2lf\n", total);

    return 0;
}
#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0:
            bill = units * 10;
            break;

        case 1:
            bill = units * 15;
            break;

        case 2:
            bill = units * 20;
            break;

        default:
            bill = units * 25;
    }

    printf("Electricity Bill = Rs. %.2f", bill);

    return 0;
}

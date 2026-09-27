#include <stdio.h>

int main() {
    int choice;
    float value, result;

    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Centimeter\n");
    printf("3. Kilogram to Gram\n");
    printf("4. Celsius to Fahrenheit\n");
    printf("5. Fahrenheit to Celsius\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice) {
        case 1:
            result = value * 1000;
            printf("Result = %.2f meters", result);
            break;

        case 2:
            result = value * 100;
            printf("Result = %.2f centimeters", result);
            break;

        case 3:
            result = value * 1000;
            printf("Result = %.2f grams", result);
            break;

        case 4:
            result = (value * 9 / 5) + 32;
            printf("Result = %.2f Fahrenheit", result);
            break;

        case 5:
            result = (value - 32) * 5 / 9;
            printf("Result = %.2f Celsius", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

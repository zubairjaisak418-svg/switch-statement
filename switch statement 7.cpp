#include <stdio.h>

int main() {
    int choice, quantity;
    float price, total;

    printf("===== RESTAURANT MENU =====\n");
    printf("1. Burger - Rs.500\n");
    printf("2. Pizza - Rs.1200\n");
    printf("3. Sandwich - Rs.350\n");
    printf("4. Fries - Rs.200\n");
    printf("5. Cold Drink - Rs.100\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice) {
        case 1:
            price = 500;
            break;

        case 2:
            price = 1200;
            break;

        case 3:
            price = 350;
            break;

        case 4:
            price = 200;
            break;

        case 5:
            price = 100;
            break;

        default:
            printf("Invalid item");
            return 0;
    }

    total = price * quantity;

    if(total >= 2000) {
        total = total - (total * 0.10);
        printf("10%% Discount Applied\n");
    }

    printf("Final Bill = Rs. %.2f", total);

    return 0;
}

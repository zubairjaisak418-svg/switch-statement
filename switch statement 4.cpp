#include <stdio.h>

int main() {
    int choice;
    float balance = 50000, amount;

    printf("===== ATM MENU =====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Balance = Rs. %.2f", balance);
            break;

        case 2:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New Balance = Rs. %.2f", balance);
            break;

        case 3:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount <= balance) {
                balance -= amount;
                printf("New Balance = Rs. %.2f", balance);
            } else {
                printf("Insufficient Balance");
            }
            break;

        case 4:
            printf("Thank you!");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

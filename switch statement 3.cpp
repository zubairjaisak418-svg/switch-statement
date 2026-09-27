#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(marks / 10) {
        case 10:
        case 9:
            printf("Grade: A+");
            break;

        case 8:
            printf("Grade: A");
            break;

        case 7:
            printf("Grade: B");
            break;

        case 6:
            printf("Grade: C");
            break;

        case 5:
            printf("Grade: D");
            break;

        default:
            printf("Fail");
    }

    return 0;
}

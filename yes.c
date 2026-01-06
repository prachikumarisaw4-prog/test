#include <stdio.h>

int main() {
    int choice;
    int num, exp;
    long long result;
    char again;

    do {
        // Step 2: Display menu
        printf("\n===== Scientific Calculator =====\n");
        printf("1. Square of a number\n");
        printf("2. Cube of a number\n");
        printf("3. Power of a number\n");
        printf("Enter your choice: ");

        // Step 3 & 4: Read choice
        scanf("%d", &choice);

        switch (choice) {

            // Square
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num;
                printf("Square of %d = %lld\n", num, result);
                break;

            // Cube
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num * num;
                printf("Cube of %d = %lld\n", num, result);
                break;

            // Power
            case 3:
                printf("Enter base number: ");
                scanf("%d", &num);
                printf("Enter exponent: ");
                scanf("%d", &exp);

                result = 1;
                for (int i = 1; i <= exp; i++) {
                    result = result * num;
                }

                printf("%d ^ %d = %lld\n", num, exp, result);
                break;

            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

        // Step 10: Repeat option
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    return 0;
}

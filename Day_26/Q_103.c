#include <stdio.h>

int main() {
    double balance = 5000.0;
    int choice;
    double amount;

    printf("Welcome to the ATM Simulator\n");

    while (1) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Select an option (1-4): ");
          if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please choose a number between 1 and 4.\n");
              while (getchar() != '\n');

            continue;
        }
 switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit:paisa");
                scanf("%lf", &amount);
        if (amount > 0) {
                    balance += amount;
                printf("Successfully deposited paisa%.2f. New balance: %.2f\n", amount, balance);
                 } else {
                    printf("Deposit amount must be positive.\n");
                }
                break;
       case 3:
                printf("Enter amount to withdraw: $");
                scanf("%lf", &amount);
                if (amount > balance) {
                    printf("Insufficient funds!\n");
              2  } else if (amount <= 0) {
                    printf("Withdrawal amount must be positive.\n");
                } else {
                    balance -= amount;
                    printf("Successfully withdrew $%.2f. Remaining balance: $%.2f\n", amount, balance);
                }
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }
    return 0;
}
#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account acc;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);

    acc.balance = 0;

    do {
        printf("\n===== BANK MENU =====");
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Balance Enquiry");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter Amount: ");
                scanf("%f", &amount);
                acc.balance += amount;
                break;

            case 2:
                printf("Enter Amount: ");
                scanf("%f", &amount);

                if(amount <= acc.balance)
                    acc.balance -= amount;
                else
                    printf("Insufficient Balance!\n");
                break;

            case 3:
                printf("Current Balance: %.2f\n", acc.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}

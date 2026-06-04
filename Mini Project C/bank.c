#include <stdio.h>

float balance = 1000;

void deposit()
{
  float amount;
  printf("Enter deposit amount: ");
  scanf("%f", &amount);

  if (amount > 0)
  {
    balance += amount;
    printf("Deposit Successful!\n");
  }
  else
    printf("Invalid Amount!\n");
}

void withdraw()
{
  float amount;
  printf("Enter withdraw amount: ");
  scanf("%f", &amount);

  if (amount > 0 && amount <= balance)
  {
    balance -= amount;
    printf("Withdrawal Successful!\n");
  }
  else
    printf("Insufficient Balance!\n");
}

void checkBalance()
{
  printf("Current Balance: %.2f\n", balance);
}

int main()
{
  int choice;

  do
  {
    printf("\n===== BANK SYSTEM =====\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
      deposit();
    else if (choice == 2)
      withdraw();
    else if (choice == 3)
      checkBalance();
    else if (choice == 4)
      printf("Thank You!\n");
    else
      printf("Invalid Choice!\n");

  } while (choice != 4);

  return 0;
}
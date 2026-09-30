#include <stdio.h>
int main() 
{
    float deposit;
    float totalSavings = 0;
    int depositCount = 0;

    printf("Enter savings amount (0 or negative to stop): ");
    scanf("%f", &deposit);

    while (deposit > 0) 
	{
        totalSavings = totalSavings + deposit; 
       depositCount = depositCount + 1;       

        printf("Enter savings amount: (Yoo Adding zero or a negative will end ts)");
        scanf("%f", &deposit);
    }

    printf("\nTotal Savings: $%.2f\n", totalSavings);
    printf("Number of Deposits: %d\n", depositCount);

    return 0;
}


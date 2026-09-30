#include <stdio.h>
int main() 
{
    char foodName[50];
    float price;
    float totalBill = 0;
    int itemCount = 0;
    int choice;

    do {
    
        printf("Please Enter food item name: ");
        scanf("%s", foodName);

    
        printf("Enter price:");
        scanf("%f", &price);

        totalBill = totalBill + price;
        itemCount = itemCount + 1;

        printf("Order another item? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
        printf("\n");

    } while (choice == 1);
    printf("--- Final Bill ---\n");
    printf("Total Items Ordered: %d\n", itemCount);
    printf("Total Bill: $%.2f\n", totalBill);

    return 0;
}


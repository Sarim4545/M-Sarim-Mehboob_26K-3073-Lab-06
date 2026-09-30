#include <stdio.h>

int main() {
    int marks[100]; 
    int count = 0; 
    int choice;     

    do {
        printf("Enter the marks for student %d: ", count + 1);
        
        scanf("%d", &marks[count]);
        		count++; 

       
        printf("Do you want to enter marks for another student? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
        
        		printf("\n");
        

    } 
	while (choice == 1);

    printf("Total number of students: %d\n", count);
    printf("Marks entered: ");
    
    for (int i = 0; i < count; i++)
	 {
        printf("%d", marks[i]);
        if (i < count - 1) 
		{
            printf(", "); 
        }
    }
    printf("\n");

    return 0;
}


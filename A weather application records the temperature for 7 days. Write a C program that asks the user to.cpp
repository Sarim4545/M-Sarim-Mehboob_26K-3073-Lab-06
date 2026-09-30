#include <stdio.h>
int main()
 {
    float temp[7];
    float total = 0.0;
    int count = 0, i=0;
    

    for(i = 0; i < 7; i++) 
	{
        printf("Enter temperature for day %d: ", i + 1);
        scanf("%f", &temp[i]);
    }

for(i = 0; i < 7; i++)
 {
        total = total + temp[i]; 
        
      if(temp[i] > 100)
	   {
            count = count + 1; 
        }
    }
    printf("\nTotal temperature: %.2f\n", total);
    printf("Number of days with temperature greater than 100: %d\n", count);

    return 0;
}


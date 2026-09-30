#include <stdio.h>
int main() 
{
	
    int numbers[] = {9, 8, 7, 6, 5, 4};
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", numbers[i] * numbers[i]); 
    }
    
    printf("\n");
    return 0;
}


#include <stdio.h>

int main() {
    int num;
    int cube;

    do {
        printf("Enter a number:");
        scanf("%d", &num);

        if (num != 0) {
            cube = num * num * num;
            printf("The cube is: %d\n\n", cube);
        }

    } while (num != 0);

    printf("User Entered Zero\n");
    return 0;
}


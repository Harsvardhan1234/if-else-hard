#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        if (num % 2 == 0)
            printf("The number is positive and even.\n");
        else
            printf("The number is positive and odd.\n");
    } else if (num < 0) {
        if (num % 2 == 0)
            printf("The number is negative and even.\n");
        else
            printf("The number is negative and odd.\n");
    } else {
        printf("The number is zero.\n");
    }
}

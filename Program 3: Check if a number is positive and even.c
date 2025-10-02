#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        printf("The number is positive and even.\n");
    } else {
        printf("The number is not positive and even.\n");
    }
}

#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num % 2 != 0) {
        printf("The number is  positive and odd.\n");
    } else {
        printf("The number is not \positive and odd.\n");
    }
}

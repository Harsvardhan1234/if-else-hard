#include <stdio.h>

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 2 == 0 || num % 3 == 0) && !(num % 2 == 0 && num % 3 == 0)) {
        printf("The number is divisible by 2 or 3, but not both.\n");
    } else {
        printf("The number is either divisible by both or by neither.\n");
    }
}

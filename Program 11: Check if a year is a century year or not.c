#include <stdio.h>

void main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        printf("%d is a century year.\n", year);
    } else {
        printf("%d is not a century year.\n", year);
    }
}

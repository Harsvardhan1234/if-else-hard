#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The sides can form a valid triangle.\n");
    } else {
        printf("The sides cannot form a valid triangle.\n");
    }
}

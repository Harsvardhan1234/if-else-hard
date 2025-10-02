#include <stdio.h>

void main() {
    int temp;

    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp >= 30) {
        printf("It is hot.\n");
    } else {
        printf("It is cold.\n");
    }
}

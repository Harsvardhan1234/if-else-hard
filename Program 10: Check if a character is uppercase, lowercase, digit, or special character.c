#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("The character is a digit.\n");
    } else {
        printf("The character is a special character.\n");
    }
}

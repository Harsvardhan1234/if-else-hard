#include <stdio.h>

void main() {
    int num, rev, a, b, c;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    a = num / 100;       
    b = (num / 10) % 10;  
    c = num % 10;       

    rev = c * 100 + b * 10 + a;

    printf("The reversed number is %d\n", rev);
}

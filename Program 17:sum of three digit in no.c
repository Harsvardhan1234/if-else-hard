#include <stdio.h>

void main() {
    int num, sum, a, b, c;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    a = num / 100;      
    b = (num / 10) % 10;  
    c = num % 10;         

    sum = a + b + c;

    printf("The sum of digits is %d\n", sum);
}

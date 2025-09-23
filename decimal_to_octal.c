#include <stdio.h>

int main()
{
    // Write a program that print Decimal to Octal
    int number1;
    printf("Decimal Number : ");
    scanf("%d", &number1);
    printf("Octal Number : %o\n\n", number1);

    // Write a program that print Octal to Decimal

    int number2;
    printf("Octal Number : ");
    scanf("%o" , &number2);
    printf("Decimal Number : %d", number2);

    return 0;
}
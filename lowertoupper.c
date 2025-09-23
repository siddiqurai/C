#include <stdio.h>

int main()
{
    // Write a program that print lower to upper case

    char lower;
    printf("Enter Lower Case : ");
    scanf("%c", &lower);
    printf("Output Upper Case : %c", lower - 32);

    return 0;
}
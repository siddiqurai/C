#include <stdio.h>

int main()
{
    // Write a program that print Upper to lower case

    char upper;
    printf("Enter Upper Case : ");
    scanf("%c", &upper);
    printf("Output lower Case : %c", upper + 32);

    return 0;
}
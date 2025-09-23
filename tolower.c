#include <stdio.h>
#include <ctype.h>

int main()
{
    char upper, lower;

    printf("Enter any Upper case letter : ");
    scanf("%c", &upper);
    lower = tolower(upper);
    printf("Lowercase letter : %c", lower);
    return 0;
}
#include <stdio.h>

int main()
{

    char ch;
    printf("Enter Character : ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("Character is number");
    }
    else
    {
        printf("Character is not number");
    }

    return 0;
}
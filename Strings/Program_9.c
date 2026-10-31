// Print only the first word of the string

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0' && str[i] != ' ')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
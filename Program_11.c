//sorting a string alphbetically
#include <stdio.h>

int main()
{
    char str[100];
    char temp;
    int i, j;

    printf("Enter any word: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted string: %s", str);

    return 0;
}
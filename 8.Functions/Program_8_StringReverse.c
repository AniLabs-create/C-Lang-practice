// 8. String Reverse using Function
#include <stdio.h>
#include <string.h>

void reverseString(char str[100]);

int main()
{
    char str[100];

    printf("Enter a random string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    reverseString(str);

    printf("The reversed string is: %s", str);

    return 0;
}

void reverseString(char str[100])
{
    char temp;
    int i = 0;
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
// 9. String Palindrome using Function
#include <stdio.h>
#include <string.h>

int Pallin(char str[100]);

int main()
{
    int result;
    char str[100];

    printf("Enter any random string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    result = Pallin(str);

    if(result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}

int Pallin(char str[100])
{
    int flag = 1;
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    for(int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            flag = 0;
            break;
        }
    }

    return flag;
}
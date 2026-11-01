// 3. Palindrome Number using Function
#include <stdio.h>
int pallin(int);
#include <stdio.h>

int pallin(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(pallin(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
int pallin(int num)
{
    int original = num;
    int digit;
    int rev = 0;

    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }

    if(original == rev)
        return 1;
    else
        return 0;
}
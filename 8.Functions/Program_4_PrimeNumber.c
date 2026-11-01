// 4. Prime Number using Function
#include <stdio.h>
int isPrime(int);
#include <stdio.h>

int isPrime(int);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}
int isPrime(int num)
{
    int i;

    if(num <= 1)
        return 0;

    for(i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
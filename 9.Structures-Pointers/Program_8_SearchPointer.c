// Find a given element in array using pointers

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = arr;

    int n, found = 0;

    printf("Enter the element you want to find: ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++)
    {
        if(*(p + i) == n)
        {
            printf("The element is present at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("The entered element is not present in the array.");
    }

    return 0;
}

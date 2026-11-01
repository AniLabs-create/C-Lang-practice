// Swap two numbers using pointers

#include <stdio.h>


void swap(int *p1, int*p2);
int main()
{
    int a = 10;
    int b = 20;

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

void swap(int *p1, int *p2)
{
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

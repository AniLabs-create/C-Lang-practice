// 1. Factorial using Function
#include <stdio.h>
long factorial(int);
int main(){
    int num;
    long result;
    printf("enter a number: ");
    scanf("%d", &num);
    result = factorial(num);
    printf("Factorial = %ld", result);
    return 0;
}
long factorial(int num){
    long fact = 1;
    for(int i = 1; i <= num ; i++){
        fact *= i;
    }
    return fact;
}
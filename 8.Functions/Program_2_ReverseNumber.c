// # 2. Reverse Number using Function
#include <stdio.h>
int reverse(int);
int main(){
    int num , result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = reverse(num);
    printf("The number in reversed format is: %d", result);
    return 0;

}
int reverse(int num){
    int digit;
    int rev = 0;
    while(num != 0){
         digit = num%10;
         rev = rev*10 + digit;
         num = num/10;

    }
    return rev;
}
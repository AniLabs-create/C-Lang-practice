// 5. Fibonacci Series using Function
#include <stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fibonacci(n);
    
    return 0;
}
void fibonacci(int num){
    int a = 0, b = 1, c;
    for (int i = 0; i<num; i++){
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
    }

}
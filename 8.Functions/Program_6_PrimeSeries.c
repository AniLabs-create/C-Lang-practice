// 6. Prime Series using Function
#include <stdio.h>
int prime(int);
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i<=n; i++){
        if(prime(i)){
            printf(" %d ", i);
        }
    }
    return 0;
}
int prime(int num){
    if(num<= 1){
        return 0;
    }
    for (int i = 2; i<= num/2; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
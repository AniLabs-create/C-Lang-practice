// Pointer basics (address and dereferencing)
#include <stdio.h>
int main(){
    int quality = 50;
    printf("%d\n", quality);
    printf("%p", (void*)&quality);
    return 0;
}
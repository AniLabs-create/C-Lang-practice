// Pointer basics (address and dereferencing)
#include <stdio.h>
int main(){
    int quality = 50;
    int *p = &quality;
    printf("%d\n", quality);
    printf("%p\n", (void*)&quality);
    printf("%d", *p);
    return 0;
}
// - Access array elements using pointers
#include <stdio.h>
int main(){
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr;
    printf("\n The elements present in the array are: \n");

    for(int i = 0; i< 5; i++){
        printf("%d\n", *(arr + i));
    }
    return 0;
}
// Largest Element in Array using Function
#include <stdio.h>
int largeArray(int arr[], int n);
int main(){
    int n;
    int arr[100];
    printf("Enter number of elements you want in an array: ");
    scanf("%d", &n);

    printf("Enter the elemente: ");
    for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The largest element in the given array is: %d", largeArray(arr,n));
    return 0;

}
int largeArray(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
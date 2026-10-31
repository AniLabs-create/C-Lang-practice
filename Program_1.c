//Find the length of a string(Without using strlen())

#include <stdio.h>
int main(){
    char str[100];
    int i = 0, count= 0;
    printf("Enter a random srting: ");
    gets(str);
    while(str[i] != '\0'){
        count ++;
        i++;
    }
    printf("The length of the given string: %d", count);
    return 0;
}
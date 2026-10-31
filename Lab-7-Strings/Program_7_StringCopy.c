// strint copy without using strcpy()
#include <stdio.h>
int main(){
    char str[100] , copy[100];
    int i = 0;
    printf("Enter a string: ");

    gets(str);
    while(str[i] != '\0'){
        copy[i] = str[i];
        
        i++;
    }
    copy[i] = '\0';
    printf("The copied string is: %s", copy);
    return 0;
}
// Program to count number of vowels and consonents
#include <stdio.h>
int main(){
    char str[100];
    int i = 0, count = 0, cosonants = 0;
    printf("Enter any random string: ");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
        else{
            cosonants++;
        }
        i++;
    }
    printf("Number of vowels present in the given string are: %d", count);
    printf("Number of consonents in the given string are: %d", cosonants);
    return 0;
}
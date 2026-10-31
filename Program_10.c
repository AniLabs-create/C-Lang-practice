// counting no of digits, alphabets, space

#include <stdio.h>
int main(){
    char str[100];
    int i = 0;
    int spaces= 0, digits = 0, alphabets = 0,symbols = 0;
    printf("Enter any weird string: ");
    gets(str);

    while(str[i] != '\0'){
        if(str[i] == ' '){
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
        else if((str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z')){
            alphabets++;
        }else{
            symbols++;
        }
        i++;
    }
    printf("Space = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Alphabets = %d\n", alphabets);
    printf("Symbols = %d\n", symbols);
    return 0;
}
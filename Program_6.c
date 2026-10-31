//Remove spaces from a string
#include <stdio.h>
int main(){
    char str[100],newstr[100];
    int i = 0, j = 0; 
    printf("Enter a sentence: ");
    gets(str);
    while(str[i] != '\0'){
        if(str[i] != ' '){
            newstr[j] = str[i];
            j++;
        }
        i++;
    }
    newstr[j] = '\0';

    printf("%s", newstr);
    return 0;
}
// no of words in a program!!
#include <stdio.h>
int main(){
    char str[100];
    int count = 1, i = 0, len=0;
    printf("Enter a sentence: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' '){
            count++;
        }
        len++;
        i++;
    }
    
    
    printf("The total no of words in the given sentence are: %d", count);
    return 0;
}
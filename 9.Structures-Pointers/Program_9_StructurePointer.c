// Use pointers with structures (structure pointers)
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[100];
    float marks;
};

int main(){
    struct Student s1;
    struct Student *ptr;
    s1.roll = 22;
    strcpy(s1.name, "Shaik Mohammed Nizamuddin");
    s1.marks = 75.54;
    ptr = &s1;
    printf("Roll no %d\n", ptr -> roll);
    printf("Name: %s\n", ptr -> name);
    printf("Marks: %.2f\n", ptr -> marks);
}
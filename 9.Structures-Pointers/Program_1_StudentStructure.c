// Read and display student details using a structure
#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[100];
    float marks;
};
int main(){
    struct Student s;
    printf("Enter your roll number: ");
    scanf("%d", &s.roll);
    printf("Enter your name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';
    printf("Enter your total marks: ");
    scanf("%f", &s.marks);

    printf("\n Student Details: \n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total Marks: %.2f\n", s.marks);
    return 0;
}

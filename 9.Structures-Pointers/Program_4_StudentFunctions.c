// Read student details using structures and display them using functions
#include <stdio.h>

struct Student
{
    int roll;
    char name[100];
    float marks;
};

void readStudent(struct Student *s);
void displayStudent(struct Student s);

int main()
{
    struct Student s;

    readStudent(&s);

    printf("\nStudent Details\n");
    displayStudent(s);

    return 0;
}

void readStudent(struct Student *s)
{
    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    getchar();

    printf("Enter Name: ");
    gets(s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void displayStudent(struct Student s)
{
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
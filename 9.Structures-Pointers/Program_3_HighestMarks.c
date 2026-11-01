// Find the student with the highest marks using structures
#include <stdio.h>
#include <string.h>

struct Student
{
    char name[100];
    float marks;
};

int main()
{
    int n;

    printf("Enter no of students: ");
    scanf("%d", &n);
    getchar();

    struct Student s[n];

    for(int i = 0; i < n; i++)
    {
        printf("Enter the name of Student %d: ", i + 1);
        gets(s[i].name);

        printf("Enter the Student %d's marks: ", i + 1);
        scanf("%f", &s[i].marks);

        getchar();
    }

    float highest = s[0].marks;
    char name[100];

    strcpy(name, s[0].name);

    for(int i = 1; i < n; i++)
    {
        if(s[i].marks > highest)
        {
            highest = s[i].marks;
            strcpy(name, s[i].name);
        }
    }

    printf("\nThe student with the highest marks is %s with %.2f marks",
           name, highest);

    return 0;
}
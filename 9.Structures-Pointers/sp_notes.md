# Structures and Pointers

[Back to repository README](../README.md)

This chapter contains the structures and pointers programs taught in the course. The examples below follow the same beginner-level approach used in the programs.

## Structures

### What is a structure?

A structure stores related data of different types under one name.

```c
struct Student
{
    int roll;
    char name[100];
    float marks;
};
```

Here, `roll`, `name`, and `marks` are members of the `Student` structure.

### Structure variable

```c
struct Student s;
```

Use the dot operator (`.`) to access members of a structure variable:

```c
s.roll
s.name
s.marks
```

### Reading a structure member

```c
scanf("%d", &s.roll);
gets(s.name);
scanf("%f", &s.marks);
```

## Program 1: Read and Display Student Details

The structure variable `s` stores one student's roll number, name, and marks.

```c
struct Student s;

scanf("%d", &s.roll);
getchar();
gets(s.name);
scanf("%f", &s.marks);
```

The members are displayed using the dot operator:

```c
printf("%d", s.roll);
printf("%s", s.name);
printf("%.2f", s.marks);
```

### Why `getchar()` is used

In this program, `scanf()` reads the roll number. After pressing Enter, the newline character can remain in the input buffer. `getchar()` reads that newline before `gets()` reads the name.

```c
scanf("%d", &s.roll);
getchar();
gets(s.name);
```

## Array of Structures

An array of structures can store records for multiple students.

```c
struct Student s[100];
```

The structure variable at index `i` can be accessed as follows:

```c
s[i].roll
s[i].name
s[i].marks
```

Example input loop:

```c
for (int i = 0; i < n; i++)
{
    scanf("%d", &s[i].roll);
    getchar();
    gets(s[i].name);
    scanf("%f", &s[i].marks);
}
```

## Program 2: Multiple Students

Program 2 uses an array of structures to read and display details of `n` students.

```c
struct Student s[n];

for (int i = 0; i < n; i++)
{
    scanf("%d", &s[i].roll);
    getchar();
    gets(s[i].name);
    scanf("%f", &s[i].marks);
}
```

## Program 3: Student with Highest Marks

The first student's marks are stored as the initial highest value:

```c
float highest = s[0].marks;
char name[100];

strcpy(name, s[0].name);
```

The remaining students are checked in a loop:

```c
for (int i = 1; i < n; i++)
{
    if (s[i].marks > highest)
    {
        highest = s[i].marks;
        strcpy(name, s[i].name);
    }
}
```

`strcpy()` copies the name string stored in the structure into another character array.

## Program 4: Structures with Functions

A structure variable can be passed to a function.

```c
void readStudent(struct Student *s);
void displayStudent(struct Student s);
```

When the function must modify the structure, its address is passed:

```c
readStudent(&s);
```

Inside the reading function, structure members are accessed through a pointer using `->`:

```c
s->roll
s->name
s->marks
```

When the structure only needs to be displayed, its value is passed:

```c
displayStudent(s);
```

## Pointers

### What is a pointer?

A pointer is a variable that stores the address of another variable.

```c
int a = 10;
int *p = &a;
```

### Address operator (`&`)

The address operator gives the address of a variable.

```c
&a
```

### Dereference operator (`*`)

The dereference operator gives the value stored at the address held by a pointer.

```c
*p
```

For example:

```c
int a = 10;
int *p = &a;

printf("%d", a);
printf("%p", (void *)&a);
printf("%p", (void *)p);
printf("%d", *p);
```

The addresses displayed by `%p` depend on the execution environment.

## Program 5: Pointer Basics

Program 5 demonstrates the value of the variable, the address of the variable, and the value accessed through the pointer:

```c
int quality = 50;
int *p = &quality;

printf("%d\n", quality);
printf("%p\n", (void *)&quality);
printf("%d", *p);
```

## Program 6: Swap Two Numbers Using Pointers

The function receives addresses:

```c
void swap(int *p1, int *p2);
```

The function call is:

```c
swap(&a, &b);
```

The swap logic is:

```c
temp = *p1;
*p1 = *p2;
*p2 = temp;
```

The address is passed so that the function can change the original variables.

## Pass by value and pass by reference

### Pass by value

```c
swap(a, b);
```

The values are copied into function parameters. A change inside the function does not change the original variables.

### Pass by reference

```c
swap(&a, &b);
```

The addresses are passed using pointers. A change made through the pointers changes the original variables.

## Arrays and Pointers

An array name can represent the base address of an array.

```c
int arr[5] = {5, 10, 15, 20, 25};
int *p = arr;
```

Array elements can be accessed using pointer arithmetic:

```c
*(p + i)
```

It is equivalent to:

```c
arr[i]
```

## Program 7: Array Elements Using Pointers

Program 7 declares `p` for the array and uses the pointer in the loop:

```c
int arr[5] = {5, 10, 15, 20, 25};
int *p = arr;

for (int i = 0; i < 5; i++)
{
    printf("%d\n", *(p + i));
}
```

## Program 8: Search for an Array Element Using Pointers

The array pointer is used to check every element:

```c
int *p = arr;

for (int i = 0; i < 5; i++)
{
    if (*(p + i) == n)
    {
        printf("The element is present at position %d", i + 1);
        found = 1;
        break;
    }
}
```

The value of `i + 1` represents the position of the element in the array.

## Structure pointers

A structure pointer stores the address of a structure variable:

```c
struct Student s1;
struct Student *ptr;

ptr = &s1;
```

### Arrow operator (`->`)

The arrow operator accesses members through a structure pointer:

```c
ptr->roll
ptr->name
ptr->marks
```

These are equivalent to:

```c
(*ptr).roll
(*ptr).name
(*ptr).marks
```

### Dot operator versus arrow operator

```c
s.roll       /* Structure variable */
ptr->roll    /* Structure pointer */
```

## Program 9: Structure Pointer

Program 9 assigns the address of `s1` to `ptr` and displays its members:

```c
struct Student *ptr;

ptr = &s1;

printf("Roll no %d\n", ptr->roll);
printf("Name: %s\n", ptr->name);
printf("Marks: %.2f\n", ptr->marks);
```

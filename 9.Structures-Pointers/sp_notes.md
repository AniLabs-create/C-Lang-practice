# Structures & Pointers

# Structures

## What is a Structure?

A structure is a user-defined data type used to group different data types under a single name.

Example:

```c
struct Student
{
    int roll;
    char name[100];
    float marks;
};
```

---

## Why Use Structures?

To store related information together.

Example:

```text
Student
├── Roll Number
├── Name
└── Marks
```

Without structures:

```c
int roll;
char name[100];
float marks;
```

With structures:

```c
struct Student s;
```

---

# Structure Variable

```c
struct Student s;
```

---

# Accessing Structure Members

Use the dot operator (`.`)

```c
s.roll
s.name
s.marks
```

Example:

```c
scanf("%d",&s.roll);
```

---

# Program 1: Read and Display Student Details

Structure:

```c
struct Student
{
    int roll;
    char name[100];
    float marks;
};
```

Input:

```c
scanf("%d",&s.roll);
gets(s.name);
scanf("%f",&s.marks);
```

Output:

```c
printf("%d",s.roll);
printf("%s",s.name);
printf("%.2f",s.marks);
```

---

# Important: getchar()

Whenever:

```c
scanf(...)
```

is followed by:

```c
gets(...)
```

use:

```c
getchar();
```

Example:

```c
scanf("%d",&s.roll);
getchar();
gets(s.name);
```

Reason:

```c
scanf()
```

leaves:

```text
\n
```

inside the input buffer.

```c
getchar()
```

removes it.

---

# Array of Structures

Store multiple students.

```c
struct Student s[100];
```

Access:

```c
s[i].roll
s[i].name
s[i].marks
```

Example:

```c
scanf("%d",&s[i].roll);
```

---

# Program 2: Multiple Students

Declaration:

```c
struct Student s[n];
```

Loop:

```c
for(i=0;i<n;i++)
{
    // Input
}
```

Display:

```c
for(i=0;i<n;i++)
{
    // Output
}
```

---

# Program 3: Find Student with Highest Marks

Initialize:

```c
float highest = s[0].marks;
```

Using index:

```c
int index = 0;
```

Update:

```c
if(s[i].marks > highest)
{
    highest = s[i].marks;
    index = i;
}
```

Display:

```c
s[index].name
s[index].marks
```

---

# Using strcpy()

Header File:

```c
#include <string.h>
```

Syntax:

```c
strcpy(destination, source);
```

Example:

```c
strcpy(topper, s[i].name);
```

Reason:

Strings cannot be assigned using:

```c
name = s[i].name;
```

❌ Wrong

---

# Structures with Functions

Prototype:

```c
void displayStudent(struct Student s);
```

Function Call:

```c
displayStudent(s);
```

---

# Pointers

## What is a Pointer?

A variable that stores the address of another variable.

Example:

```c
int a = 10;
int *p = &a;
```

---

# Pointer*Declaration

```c
int *p;
```

Rea* as:

```text
p is a pointer to in*
```

---

# Address Operator (&)
*Returns address of a variable.

*xample:

```c
&a
```

---

# Deref*rence Operator (*)

Returns value *tored at an address.

Example:

``*c
*p
```

---

# Example

```c
int*a = 10;
int *p = &*;
```

Value of:

```c
a
*``

Output:

```text
10
```

Value*of:

```c
&a
```

Output:

```text*Address of a
```

Value of*

```c
p
```

Output:

```text
Add*ess of a
```

Value of:

```c
*p
```

Output:

```text
10
``*

---

# Visual*Representation

```text
a = 10

Ad*ress: 1000
Value *: 10


p = 1000
```

So:

```*
*p
```

gives:

```text
10
*``

---

# Program 4: Pointer*Basics

```c
int a = 10;
int *p =*&a;

printf("%d", a);
printf("%u*, &a);
printf("%u", p);
printf("%d*, **);
```

---

# Swap Two Numbers Us*ng Pointers

Prototype:

```c
void*swap(int *a, int *b);
```

Logic:
*```c
temp = *a;
*a = *b;
*b = temp*
```

Function Call:

```c
swap(&x*&y);
```

---

# Pass By Value

Ex*mple:

```c
swap(a,b);
```

Only c*pies are passed.

Original values *emain unchanged.

---

# Pass By R*ference

Example:

```c
swap(&a,&b*;
```

Addresses are passed.

Orig*nal values change.

---

# Arrays *nd Pointers

Array element:

```c
*rr[i]
```

Equivalent Pointer Form*

```c
*(arr+i)
```

Both mean the*same thing.

---

# Program 5: Arr*y Elements Using Pointers

```c
fo*(i=0;i<n;i++)
{
    printf("%d", **arr+i));
}
```

---

# Program 6: *argest Element Using Pointers

Ini*ialize:

```c
max = *arr;
```

Che*k:

```c
if(*(arr+i) > max)
{
    *ax = *(arr+i);
}
```

---

# Struc*ure Pointers

Declaration:

```c
s*ruct Student *p;
```

Pointer Assi*nment:

```c
p = &s;
```

---

# A*row Operator (->)

Instead of:

``*c
(*p).roll
```

Use:

```c
p->rol*
```

Instead of:

```c
(*p).name
*``

Use:

```c
p->name
```

---

#*Structure Variable vs Structure Po*nter

Structure Variable:

```c
s.*oll
s.name
s.marks
```

Structure *ointer:

```c
p->roll
p->name
p->m*rks
```

---

# Most Important Pro*rams

1. Read and Display Student *etails
2. Multiple Students Using *rray of Structures
3. Student with*Highest Marks
4. Structure with Functions
5. Pointer Basics
6. Swap Two Numbers Using Pointers
7. Array Using Pointers
8. Largest Element Using Pointers
9. Structure Pointers

---

# Exam Strategy

Remember:

## Structure

```c
struct Student
{
};
```

Access:

```c
s.member
```

## Pointer

```c
int *p;
```

Address:

```c
&a
```

Value:

```c
*p
```

## Structure Pointer

```c
p->member
```

These three concepts cover most Lab 9 questions.
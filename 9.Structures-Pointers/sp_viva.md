# Structures & Pointers Viva Questions

# Structures

## Q1. What is a structure?

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

## Q2. Why do we use structures?

To store related data together.

Example:

```text
Roll Number
Name
Marks
```

---

## Q3. How do you declare a structure?

```c
struct Student
{
    int roll;
    char name[100];
    float marks;
};
```

---

## Q4. How do you create a structure variable?

```c
struct Student s;
```

---

## Q5. How do you access structure members?

Using the dot operator (`.`)

```c
s.roll
s.name
s.marks
```

---

## Q6. What is an array of structures?

A collection of structure variables.

```c
struct Student s[100];
```

---

## Q7. Why do we use arrays of structures?

To store information for multiple records.

Example:

```text
Multiple Students
Multiple Employees
Multiple Books
```

---

## Q8. Can a structure contain an array?

Yes.

Example:

```c
struct Student
{
    char name[100];
};
```

---

## Q9. Can a structure contain different data types?

Yes.

Example:

```c
int
float
char
```

can exist in the same structure.

---

## Q10. What is the difference between an array and a structure?

### Array

Stores similar data types.

```c
int arr[10];
```

### Structure

Stores different data types.

```c
struct Student
{
    int roll;
    float marks;
};
```

---

# Pointers

## Q11. What is a pointer?

A pointer is a variable that stores the address of another variable.

---

## Q12. How do you declare a pointer?

```c
int *p;
```

---

## Q13. What does '&'*mean?

Address-of operator.

Examp*e:

```c
&a
```

Returns address o* variable `a`.

---

## Q14. What *oes '*' mean?

Dereference operato*.

Example:

```c
*p
```

Returns *he value stored at the address.

-*-

## Q15. What is the difference *etween p and *p?

```c
p
```

cont*ins an address.

```c
*p
```

cont*ins the value stored at that addre*s.

---

## Q16. What is pointer i*itialization?

```c
int a = 10;
*nt *p = &a;
```

---

## Q17. What*is dereferencing?

Accessing a val*e through a pointer.

Example:

``*c
*p
```

---

## Q18. What is a N*LL pointer?

A pointer pointing to*nothing.

```c
int *p = NULL;
```
*---

## Q19. Why are pointers used*

- Pass by reference
- Arrays*- Structures
- Efficient memory ac*ess

---

## Q20. What is a pointe* variable?

A variable that stores*memory addresses.

---

#*Pointer Basics

## Q21. What is th* output?

```c
int a = 10;
int *p * &a;

printf("%d", *p);
```

Outpu*:

```text
10
```

---

## Q22. Wh*t is the output?

```c
int a = 10;*
printf("%u", &a);
```

Output:

`*`text
Address of a
```

---

## Q2*. What is the relation between p*and &a?

```c
int**p = &a;
```

Then:

```c
p*== &a
```

---

## Q24. What is*the relation between *p and a?

``*c
*p == a*```

---

# Parameter Passing

## *25. What is Pass by Value?

A copy*of the variable is sent to the fun*tion.

Changes inside the function*do not affect the original variabl*.

---

## Q26. What is Pass by Re*erence?

The address of the variab*e is sent to the function.

Change* inside the function affect the or*ginal variable.

---

## Q27. Whic* uses pointers?

Pass by Reference*

---

## Q28. Why is swap using p*inters successful?

Because addres*es are passed.

The function modif*es the original variables.

---

#* Q29. Prototype of swap using poin*ers?

```c
void swap(int *a, int **);
```

---

## Q30. Function call*for swap?

```c
swap(&x, &y);
```
*---

## Q31. Logic for swapping us*ng pointers?

```c
temp = *a;
*a =**b;
*b = temp;
```

---

# Arrays *nd Pointers

## Q32. How is an arr*y passed to a function?

```c
func*ion(arr);
```

---

## Q33. What i* the relationship between arrays a*d pointers?

Array name stores the*base address of the array.

---

#* Q34. What is equivalent to arr[i]*

```c
*(arr+i)
```

---

## Q35. *hat does arr+i represent?

Address*of the ith element.

---

## Q36. *hat does *(arr+i) represent?

Valu* of the ith element.

---

# Struc*ure Pointers

## Q37. How do you d*clare a structure pointer?

```c
s*ruct Student *p;
```

---

## Q38.*How do you store the address of a *tructure?

```c
p = &s;
```

---

*# Q39. What does p->roll mean?

Ac*ess the roll member through a stru*ture pointer.

---

## Q40. What is the difference between . and -> ?

### Dot Operator

Used with structure variables.

```c
s.roll
```

### Arrow Operator

Used with structure pointers.

```c
p->roll
```

---

## Q41. Is p->roll same as (*p).roll?

Yes.

```c
p->roll
```

is equivalent to

```c
(*p).roll
```

---

# Frequently Asked Viva Questions

1. What is a structure?
2. Why are structures used?
3. What is an array of structures?
4. What is a pointer?
5. What does '&' do?
6. What does '*' do?
7. Difference between p and *p?
8. What is dereferencing?
9. What is pass by value?
10. What is pass by reference?
11. Why are pointers used in swap?
12. What is arr[i] equivalent to?
13. What is a structure pointer?
14. Difference between . and -> ?
15. What is a NULL pointer?
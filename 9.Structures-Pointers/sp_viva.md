# Structures and Pointers Viva Questions

[Back to repository README](../README.md)

## Structures

### Q1. What is a structure?

A structure is a user-defined data type used to group related data of different types under one name.

### Q2. Why are structures used?

Structures store related information together, such as a student's roll number, name, and marks.

### Q3. How do you declare a structure?

```c
struct Student
{
    int roll;
    char name[100];
    float marks;
};
```

### Q4. How do you create a structure variable?

```c
struct Student s;
```

### Q5. How do you access members of a structure variable?

Use the dot operator (`.`):

```c
s.roll
s.name
s.marks
```

### Q6. What is an array of structures?

It is an array whose elements are structure variables. It stores records for multiple entities.

```c
struct Student s[100];
```

### Q7. Why do we use an array of structures?

It stores and processes multiple records, such as details of several students.

### Q8. Can a structure contain different data types?

Yes. For example, a structure can contain an integer, character array, and float.

### Q9. What is the difference between an array and a structure?

An array stores elements of the same data type. A structure can store members of different data types.

### Q10. What is `getchar()` used for in these programs?

It reads the newline left in the input buffer after `scanf()` so that `gets()` reads the name correctly.

## Pointers

### Q11. What is a pointer?

A pointer is a variable that stores the address of another variable.

### Q12. How do you declare an integer pointer?

```c
int *p;
```

### Q13. What does `&` mean?

It is the address-of operator and gives the address of a variable.

```c
&a
```

### Q14. What does `*` mean with a pointer?

It is the dereference operator. It gives the value stored at the address held by the pointer.

```c
*p
```

### Q15. What is the difference between `p` and `*p`?

`p` contains the address. `*p` contains the value stored at that address.

### Q16. How is a pointer initialized?

```c
int a = 10;
int *p = &a;
```

### Q17. What is dereferencing?

Dereferencing means accessing the value at the address stored in a pointer.

### Q18. How is an address printed?

An address is printed with `%p`, and the address expression is cast to `void *`.

```c
printf("%p", (void *)&a);
```

## Parameter passing

### Q19. What is pass by value?

A copy of a value is passed to the function. Changes made inside the function do not affect the original value.

### Q20. What is pass by reference?

The address of a variable is passed to a function using a pointer. Changes made through the pointer affect the original variable.

### Q21. Why does the pointer swap program work?

Addresses of the original variables are passed to the function. The function changes the values stored at those addresses.

### Q22. What is the prototype of the swap function?

For the two integer pointers used in Program 6:

```c
void swap(int *p1, int *p2);
```

### Q23. How is `swap()` called?

```c
swap(&a, &b);
```

### Q24. What is the logic used to swap two numbers with pointers?

```c
temp = *p1;
*p1 = *p2;
*p2 = temp;
```

## Arrays and pointers

### Q25. How are array elements related to pointers?

The array name represents the base address of the array. With pointer `p` assigned the array address:

```c
*(p + i)
```

accesses the same element as:

```c
arr[i]
```

### Q26. What does `p + i` represent?

It represents the address of the element at index `i`.

### Q27. What does `*(p + i)` represent?

It represents the value at index `i`.

### Q28. How is an array searched using pointers in Program 8?

Each element is checked using `*(p + i)`. If it matches the input value, the position is printed using `i + 1`.

## Structure pointers

### Q29. How do you declare a structure pointer?

```c
struct Student *ptr;
```

### Q30. How do you store the address of a structure variable?

```c
ptr = &s1;
```

### Q31. What does `ptr->roll` mean?

It accesses the `roll` member through the structure pointer `ptr`.

### Q32. What is the difference between `.` and `->`?

The dot operator is used with a structure variable:

```c
s.roll
```

The arrow operator is used with a structure pointer:

```c
ptr->roll
```

### Q33. Is `ptr->roll` the same as `(*ptr).roll`?

Yes. The arrow operator is another way of accessing a structure member through a pointer.

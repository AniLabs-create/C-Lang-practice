# PPS Lab 8 - Modular Programming (Functions) Viva Questions

# Basics of Functions

## Q1. What is a function?

A function is a self-contained block of code that performs a specific task.

---

## Q2. Why are functions used?

- Code Reusability
- Easy Debugging
- Better Readability
- Reduces Code Duplication

---

## Q3. What is Modular Programming?

Breaking a large program into smaller reusable functions.

---

## Q4. What are the three parts of a function?

1. Function Prototype
2. Function Call
3. Function Definition

---

## Q5. What is a function prototype?

Declaration of a function before `main()`.

Example:

```c
int add(int, int);
```

---

## Q6. What is a function call?

Invoking a function.

Example:

```c
add(10,20);
```

---

## Q7. What is a function definition?

The actual implementation of the function.

Example:

```c
int add(int a, int b)
{
    return a+b;
}
```

---

## Q8. What is a return value?

A value sent back to the calling function.

Example:

```c
return sum;
```

---

## Q9. What is a parameter?

Variables used in the function definition.

Example:

```c
int add(int a, int b)
```

`a` and `b` are parameters.

---

## Q10. What are arguments?

Values passed during a function call.

Example:

```c
add(10,20);
```

10 and 20 are arguments.

---

# Four Types of Functions

## Q11. What are the four types of functions?

### Type 1

No Arguments, No Return Value

```c
void display()
{
}
```

### Type 2

Arguments, No Return Value

```c
void show(int a)
{
}
```

### Type 3

No Arguments, Return Value

```c
int show()
{
    return 10;
}
```

### Type 4

Arguments, Return Value

```c
int show(int a)
{
    return a;
}
```

---

## Q12. Which function type is most commonly used?

Arguments with Return Value.

Example:

```c
int add(int a, int b)
{
    return a+b;
}
```

---

# Return Types

## Q13. What is a void function?

A function that does not return any value.

Example:

```c
void display()
{
    printf("Hello");
}
```

---

## Q14. What is a non-void function?

A function that returns a value.

Example:

```c
int add(int a, int b)
{
    return a+b;
}
```

---

## Q15. Can a void function return a value?

No.

---

# Actual and Formal Arguments

## Q16. What are actual arguments?

Values supplied during the function call.

Example:

```c
add(10,20);
```

---

## Q17. What are formal arguments?

Variables that receive values.

Example:

```c
int add(int a, int b)
```

---

## Q18. Difference between actual and formal arguments?

### Actual Arguments

```c
add(10,20);
```

### Formal Arguments

```c
int add(int a,int b)
```

---

# Function Programs

## Q19. What is factorial?

Product of all positive integers from 1 to n.

Example:

```text
5! = 120
```

---

## Q20. What is a prime number?

A number divisible only by 1 and itself.

Examples:

```text
2
3
5
7
11
```

---

## Q21. Is 1 a prime number?

No.

---

## Q22. What is a palindrome number?

A number that remains the same when reversed.

Examples:

```text
121
1331
1221
```

---

## Q23. What is a Fibonacci series?

A series where each term is the sum of the previous two terms.

Example:

```text
0 1 1 2 3 5 8 13
```

---

## Q24. What is the logic of Fibonacci series?

```c
c = a + b;
a = b;
b = c;
```

---

## Q25. Why is Fibonacci often written using a void function?

Because the function directly prints the series instead of returning a value.

---

# Arrays with Functions

## Q26. How is an array passed to a function?

Example:

```c
largest(arr,n);
```

Prototype:

```c
int largest(int arr[], int n);
```

---

## Q27. How do you find the largest element in an array?

```c
max = arr[0];

if(arr[i] > max)
{
    max = arr[i];
}
```

---

## Q28. Can arrays be sent to functions?

Yes.

Example:

```c
int largest(int arr[], int n);
```

---

# Strings with Functions

## Q29. How is a string passed to a function?

Example:

```c
reverseString(str);
```

Prototype:

```c
void reverseString(char str[]);
```

---

## Q30. How do you reverse a string?

Swap:

```c
str[i]
```

with

```c
str[len-i-1]
```

---

## Q31. How do you check palindrome string?

Compare:

```c
str[i]
```

and

```c
str[len-i-1]
```

---

## Q32. Why do we iterate only till len/2?

Because after reaching the middle all character pairs have already been compared.

---

# Important Concepts

## Q33. What is code reusability?

Using the same function multiple times.

---

## Q34. How does modular programming reduce code duplication?

Logic is written once inside a function and reused whenever required.

---

## Q35. Can one function call another function?

Yes.

Example:

```c
if(isPrime(i))
{
    printf("%d",i);
}
```

---

## Q36. Why is Prime Series a good example of modular programming?

Because the program repeatedly reuses:

```c
isPrime()
```

instead of rewriting prime logic.

---

## Q37. What happens if the return type and returned value do not match?

Compiler warning or error may occur.

---

## Q38. Why do we usually write function definitions after main()?

- Keeps main() readable
- Follows standard academic style
- Uses prototypes before main()

---

## Q39. Is a prototype necessary if the function is defined before main()?

No.

---

## Q40. What is the general flow of a function program?

```text
Prototype
↓
main()
↓
Function Call
↓
Function Definition
↓
Return Value
↓
Output
```

---

# Most Important Viva Questions

1. What is a function?
2. What is modular programming?
3. What are the three parts of a function?
4. What is a function prototype?
5. What is a function call?
6. What are actual and formal arguments?
7. What are the four types of functions?
8. What is a void function?
9. What is a prime number?
10. What is a palindrome number?
11. What is Fibonacci series?
12. How are arrays passed to functions?
13. How are strings passed to functions?
14. Why use functions?
15. What is code reusability?
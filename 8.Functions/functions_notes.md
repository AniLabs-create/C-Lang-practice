# Modular Programming (Functions) - PPS Lab 8 Quick Revision

# What is Modular Programming?

Modular Programming is the process of dividing a large program into smaller reusable functions.

Benefits:

- Code Reusability
- Easy Debugging
- Better Readability
- Reduced Code Duplication

---

# Function Syntax

```c
return_type function_name(parameters)
{
    // code
}
```

Example:

```c
int add(int a, int b)
{
    return a+b;
}
```

---

# Three Parts of a Function

## 1. Function Prototype

Declaration before main()

```c
int add(int, int);
```

---

## 2. Function Call

Invoking a function.

```c
sum = add(5,10);
```

---

## 3. Function Definition

Actual implementation.

```c
int add(int a, int b)
{
    return a+b;
}
```

---

# General Structure

```c
#include <stdio.h>

function prototype

int main()
{
    // input

    function call

    // output

    return 0;
}

function definition
{
    // logic

    return value;
}
```

---

# Four Types of Functions

## 1. No Arguments, No Return Value

```c
void display()
{
    printf("Hello");
}
```

---

## 2. Arguments, No Return Value

```c
void add(int a, int b)
{
    printf("%d", a+b);
}
```

---

## 3. No Arguments, Return Value

```c
int add()
{
    return 10;
}
```

---

## 4. Arguments, Return Value

```c
int add(int a, int b)
{
    return a+b;
}
```

---

# Actual vs Formal Arguments

## Actual Arguments

Values passed during function call.

```c
add(10,20);
```

10 and 20 are actual arguments.

---

## Formal Arguments

Parameters in function definition.

```c
int add(int a, int b)
```

a and b are formal arguments.

---

# Program 1: Factorial Using Function

Input:

```text
5
```

Output:

```text
120
```

Function Prototype:

```c
long factorial(int);
```

Logic:

```c
fact = fact * i;
```

Return:

```c
return fact;
```

---

# Program 2: Reverse Number Using Function

Input:

```text
1234
```

Output:

```text
4321
```

Logic:

```c
digit = num % 10;
rev = rev * 10 + digit;
num = num / 10;
```

Return:

```c
return rev;
```

---

# Program 3: Palindrome Number Using Function

Examples:

```text
121
1331
1221
```

Logic:

1. Reverse the number.
2. Compare original and reverse.

```c
if(original == reverse)
```

Return:

```c
1 -> Palindrome
0 -> Not Palindrome
```

---

# Program 4: Prime Number Using Function

Definition:

A number divisible only by 1 and itself.

Logic:

```c
for(i=2;i<=num/2;i++)
{
    if(num%i==0)
        return 0;
}
```

Return:

```c
1 -> Prime
0 -> Not Prime
```

---

# Program 5: Fibonacci Series Using Function

Series:

```text
0 1 1 2 3 5 8 13 ...
```

Rule:

```text
Next Term = Sum of Previous Two Terms
```

Core Logic:

```c
c = a + b;
a = b;
b = c;
```

Usually:

```c
void fibonacci(int);
```

because the function prints directly.

---

# Program 6: Prime Series Using Function

Input:

```text
20
```

Output:

```text
2 3 5 7 11 13 17 19
```

Logic:

```c
for(i=2;i<=n;i++)
{
    if(isPrime(i))
        printf("%d ",i);
}
```

Reuses:

```c
isPrime()
```

---

# Program 7: Largest Element in Array Using Function

Input:

```text
10 45 23 78 34
```

Output:

```text
78
```

Prototype:

```c
int largest(int arr[], int n);
```

Logic:

```c
max = arr[0];

if(arr[i] > max)
{
    max = arr[i];
}
```

Return:

```c
return max;
```

---

# Program 8: Reverse String Using Function

Input:

```text
hello
```

Output:

```text
olleh
```

Prototype:

```c
void reverseString(char str[]);
```

String Length:

```c
while(str[len] != '\0')
{
    len++;
}
```

Swap:

```c
temp = str[i];
str[i] = str[len-i-1];
str[len-i-1] = temp;
```

---

# Program 9: Palindrome String Using Function

Input:

```text
madam
```

Output:

```text
Palindrome
```

Prototype:

```c
int palindrome(char str[]);
```

Logic:

```c
if(str[i] != str[len-i-1])
{
    flag = 0;
    break;
}
```

Return:

```c
return flag;
```

Where:

```text
1 -> Palindrome
0 -> Not Palindrome
```

---

# Common Patterns

## Returning a Value

```c
return answer;
```

Examples:

```c
factorial()
reverse()
largest()
isPrime()
```

---

## Returning True or False

```c
return 1;
return 0;
```

Examples:

```c
palindrome()
isPrime()
```

---

## Using Void Functions

```c
void display()
{
}
```

Used when nothing needs to be returned.

Examples:

```c
fibonacci()
reverseString()
```

---

# Arrays in Functions

Prototype:

```c
int largest(int arr[], int n);
```

Function Call:

```c
largest(arr,n);
```

---

# Strings in Functions

Prototype:

```c
void reverseString(char str[]);
```

Function Call:

```c
reverseString(str);
```

---

# Most Important Programs

1. Factorial using Function
2. Reverse Number using Function
3. Palindrome Number using Function
4. Prime Number using Function
5. Fibonacci using Function
6. Prime Series using Function
7. Largest Element in Array using Function
8. Reverse String using Function
9. Palindrome String using Function

---

# Exam Strategy

For every function program:

1. Write the Prototype
2. Write main()
3. Take Input
4. Call Function
5. Write Function Definition
6. Return Result (if needed)

Remember:

```c
Prototype
↓
main()
↓
Function Call
↓
Function Definition
↓
Return Value
```
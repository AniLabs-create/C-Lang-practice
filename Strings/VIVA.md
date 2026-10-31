# PPS Lab 7 - Strings Viva Questions

## Q1. What is a string?

A string is a collection of characters terminated by a null character ('\0').

Example:

```c
char str[] = "Hello";
```

---

## Q2. What is a null character?

```c
'\0'
```

It marks the end of a string.

---

## Q3. Why is '\0' required?

Without '\0', C cannot determine where the string ends.

---

## Q4. How is a string declared?

```c
char str[100];
```

---

## Q5. How is a string initialized?

```c
char str[] = "Hello";
```

or

```c
char str[] = {'H','e','l','l','o','\0'};
```

---

## Q6. Difference between a character and a string?

Character:

```c
char ch = 'A';
```

String:

```c
char str[] = "A";
```

---

## Q7. Difference between scanf() and gets()?

### scanf()

```c
scanf("%s", str);
```

Stops reading at first space.

### gets()

```c
gets(str);
```

Reads the entire line including spaces.

---

## Q8. Difference between puts() and printf()?

### puts()

Prints entire string and moves to next line.

```c
puts(str);
```

### printf()

More flexible.

```c
printf("%s", str);
```

---

## Q9. Which header file contains string functions?

```c
#include <string.h>
```

---

## Q10. What does strlen() do?

Returns the length of a string.

```c
strlen(str);
```

---

## Q11. Does strlen() count '\0'?

No.

Example:

```text
MIT
```

Length:

```text
3
```

---

## Q12. What does strcpy() do?

Copies one string to another.

```c
strcpy(destination, source);
```

---

## Q13. What does strcmp() do?

Compares two strings.

```c
strcmp(str1, str2);
```

Returns:

```text
0  -> equal
>0 -> first string greater
<0 -> first string smaller
```

---

## Q14. What does strcat() do?

Concatenates (joins) two strings.

```c
strcat(str1, str2);
```

---

## Q15. What is string concatenation?

Joining two strings.

Example:

```text
Hello + World
```

Output:

```text
HelloWorld
```

---

## Q16. What is a palindrome string?

A string that reads the same forward and backward.

Examples:

```text
madam
level
racecar
```

---

## Q17. What is string reversal?

Rearranging characters in reverse order.

Example:

```text
hello
```

becomes

```text
olleh
```

---

## Q18. How can the length of a string be found without strlen()?

Traverse the string until:

```c
'\0'
```

and count characters.

---

## Q19. How are strings stored internally?

As an array of characters.

Example:

```text
H e l l o \0
```

---

## Q20. What is ASCII?

ASCII is a character encoding standard.

Example:

```text
A = 65
a = 97
0 = 48
```

---

## Q21. How do you identify a digit in a string?

```c
str[i] >= '0' && str[i] <= '9'
```

---

## Q22. How do you identify an uppercase letter?

```c
str[i] >= 'A' && str[i] <= 'Z'
```

---

## Q23. How do you identify a lowercase letter?

```c
str[i] >= 'a' && str[i] <= 'z'
```

---

## Q24. How do you count words in a sentence?

Count spaces and add 1.

Example:

```text
I Love MIT
```

Spaces = 2

Words = 3

---

## Q25. How do you remove spaces from a string?

Copy only non-space characters into a new string.

---

## Q26. What is string traversal?

Accessing characters one by one.

Example:

```c
while(str[i] != '\0')
{
    i++;
}
```

---

## Q27. What is the output?

```c
char str[] = "MIT";
printf("%d", strlen(str));
```

Output:

```text
3
```

---

## Q28. What is the output?

```c
strcmp("MIT","MIT")
```

Output:

```text
0
```

---

## Q29. What is the output?

```c
char str[] = "HELLO";
printf("%c", str[1]);
```

Output:

```text
E
```

---

## Q30. What is the output?

```c
char str[] = "HELLO";
printf("%c", str[4]);
```

Output:

```text
O
```

---

# Most Important Viva Questions

1. What is a string?
2. What is '\0'?
3. Difference between scanf() and gets()?
4. Difference between printf() and puts()?
5. What does strlen() do?
6. What does strcpy() do?
7. What does strcmp() do?
8. What does strcat() do?
9. What is a palindrome string?
10. How are strings stored in memory?
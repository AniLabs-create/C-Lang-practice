# Strings in C Quick Revision

[Back to repository README](../README.md) | [Viva questions](strings_viva.md) | [Progress tracker](progress.md)

## What is a String?

A string is a collection of characters terminated by a null character (`'\0'`).

Example:

```c
char str[] = "Hello";
```

Memory Representation:

```text
H e l l o \0
```

---

## String Declaration

```c
char str[100];
```

Maximum characters that can be stored:

```text
99 characters + '\0'
```

---

## String Input and Output

## Input

```c
gets(str);
```

Example:

```c
char str[100];
gets(str);
```

---

## Output

```c
puts(str);
```

Example:

```c
puts(str);
```

---

## Important Header File

```c
#include <string.h>
```

Contains:

```c
strlen()
strcpy()
strcmp()
strcat()
```

---

## String Traversal Pattern

Most string programs use:

```c
int i = 0;

while(str[i] != '\0')
{
    // Logic
    i++;
}
```

---

## String Length (Without strlen)

Logic:

```c
count++;
```

for every character until `'\0'`.

Example:

Input:

```text
MIT
```

Output:

```text
3
```

---

## Count Vowels

Vowels:

```text
a e i o u
A E I O U
```

Condition:

```c
if(str[i]=='a' || str[i]=='e' ||
   str[i]=='i' || str[i]=='o' ||
   str[i]=='u' || str[i]=='A' ||
   str[i]=='E' || str[i]=='I' ||
   str[i]=='O' || str[i]=='U')
{
    count++;
}
```

---

## Count Vowels and Consonants

Alphabet Condition:

```c
(str[i] >= 'A' && str[i] <= 'Z') ||
(str[i] >= 'a' && str[i] <= 'z')
```

Use:

```c
vowels++;
```

or

```c
consonants++;
```

---

## Reverse String

Input:

```text
hello
```

Output:

```text
olleh
```

Swap Logic:

```c
temp = str[i];
str[i] = str[len-i-1];
str[len-i-1] = temp;
```

Loop:

```c
for(i = 0; i < len/2; i++)
```

---

## Palindrome String

Examples:

```text
madam
racecar
level
```

Logic:

```c
if(str[i] != str[len-i-1])
```

If mismatch occurs:

```c
Not Palindrome
```

Otherwise:

```c
Palindrome
```

---

## Count Words in a Sentence

Logic:

```c
count = 1;
```

Count spaces:

```c
if(str[i] == ' ')
{
    count++;
}
```

Example:

Input:

```text
I Love MIT Bengaluru
```

Output:

```text
4
```

---

## Remove Spaces

Input:

```text
MIT Bengaluru
```

Output:

```text
MITBengaluru
```

Logic:

```c
if(str[i] != ' ')
{
    newstr[j] = str[i];
    j++;
}
```

Terminate:

```c
newstr[j] = '\0';
```

---

## String Copy (Without strcpy)

Logic:

```c
copy[i] = str[i];
```

Loop until:

```c
str[i] == '\0'
```

Terminate:

```c
copy[i] = '\0';
```

---

## Compare Strings (Without strcmp)

Logic:

```c
if(str1[i] != str2[i])
{
    flag = 0;
}
```

If every character matches:

```text
Strings are equal
```

Else:

```text
Strings are not equal
```

---

## Print First Word

Input:

```text
Manipal Institute of Technology
```

Output:

```text
Manipal
```

Logic:

```c
while(str[i] != ' ' && str[i] != '\0')
{
    printf("%c", str[i]);
    i++;
}
```

---

## Count Digits, Alphabets, Spaces, Symbols

## Space

```c
str[i] == ' '
```

## Digit

```c
str[i] >= '0' && str[i] <= '9'
```

## Alphabet

```c
(str[i] >= 'A' && str[i] <= 'Z') ||
(str[i] >= 'a' && str[i] <= 'z')
```

## Symbol

```c
else
{
    symbols++;
}
```

---

## Sort String Alphabetically

Input:

```text
dcba
```

Output:

```text
abcd
```

Nested Loop:

```c
for(i = 0; str[i] != '\0'; i++)
{
    for(j = i+1; str[j] != '\0'; j++)
    {
        if(str[i] > str[j])
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
}
```

---

## Important String Functions

## strlen()

Returns length.

```c
strlen(str);
```

---

## strcpy()

Copies string.

```c
strcpy(destination, source);
```

---

## strcmp()

Compares strings.

```c
strcmp(str1, str2);
```

Returns:

```text
0   -> Equal
>0  -> First String Greater
<0  -> First String Smaller
```

---

## strcat()

Concatenates strings.

```c
strcat(str1, str2);
```

Example:

```text
Hello + World
```

Output:

```text
HelloWorld
```

---

## Viva Questions

1. What is a string?
2. What is '\0'?
3. Difference between gets() and scanf()?
4. Which header file contains string functions?
5. What does strlen() do?
6. What does strcpy() do?
7. What does strcmp() return for equal strings?
8. What is strcat() used for?
9. Why do we use '\0'?
10. How is a string stored in memory?

---

## Most Important Programs for Exam

1. Length of String
2. Count Vowels and Consonants
3. Reverse String
4. Palindrome String
5. Count Words
6. Remove Spaces
7. String Copy
8. String Compare
9. Count Digits/Alphabets/Spaces
10. Sort String Alphabetically
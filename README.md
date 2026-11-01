# C Programming Practice

This repository contains my C programming practice programs from first-year Computer Science coursework. The folders follow the order of the topics covered in class.

Along with source programs, each completed chapter includes revision notes, viva questions, and a progress tracker.

## Contents

- [Repository Structure](#repository-structure)
- [Progress Tracker](#progress-tracker)
- [String Programs](#string-programs)
- [Functions](#functions)
- [Structures and Pointers](#structures-and-pointers)
- [Revision Notes and Viva Questions](#revision-notes-and-viva-questions)
- [Compile and Run](#compile-and-run)
- [Author](#author)

## Repository Structure

| Folder | Contents |
| --- | --- |
| [7.Strings/](7.Strings/) | String programs, revision notes, viva questions, and progress tracker |
| [8.Functions/](8.Functions/) | Function programs, revision notes, viva questions, and progress tracker |
| [9.Structures-Pointers/](9.Structures-Pointers/) | Structure and pointer programs, revision notes, viva questions, and progress tracker |

## Progress Tracker

| Topic | Status |
| --- | --- |
| Strings | Completed |
| Functions | Completed |
| Structures and pointers | Completed |

Detailed progress is recorded in:

- [String progress](7.Strings/progress.md)
- [Function progress](8.Functions/progress.md)
- [Structures and pointers progress](9.Structures-Pointers/progress.md)

## String Programs

| Program | Topic |
| --- | --- |
| [Program_1_Length.c](7.Strings/Program_1_Length.c) | Find string length without `strlen()` |
| [Program_2_Vowels.c](7.Strings/Program_2_Vowels.c) | Count vowels and consonants |
| [Program_3_Reverse.c](7.Strings/Program_3_Reverse.c) | Reverse a string |
| [Program_4_Palindrome.c](7.Strings/Program_4_Palindrome.c) | Check whether a string is a palindrome |
| [Program_5_WordCount.c](7.Strings/Program_5_WordCount.c) | Count words in a string |
| [Program_6_RemoveSpaces.c](7.Strings/Program_6_RemoveSpaces.c) | Remove spaces from a string |
| [Program_7_StringCopy.c](7.Strings/Program_7_StringCopy.c) | Copy a string without `strcpy()` |
| [Program_8_StringCompare.c](7.Strings/Program_8_StringCompare.c) | Compare strings without `strcmp()` |
| [Program_9_FirstWord.c](7.Strings/Program_9_FirstWord.c) | Print the first word of a string |
| [Program_10_CharStats.c](7.Strings/Program_10_CharStats.c) | Count digits, letters, and spaces |
| [Program_11_SortString.c](7.Strings/Program_11_SortString.c) | Sort a string alphabetically |

## Functions

| Program | Topic |
| --- | --- |
| [Program_1_Factorial.c](8.Functions/Program_1_Factorial.c) | Calculate factorial using a function |
| [Program_2_ReverseNumber.c](8.Functions/Program_2_ReverseNumber.c) | Reverse a number using a function |
| [Program_3_PalindromeNumber.c](8.Functions/Program_3_PalindromeNumber.c) | Check a number for palindrome using a function |
| [Program_4_PrimeNumber.c](8.Functions/Program_4_PrimeNumber.c) | Check a number for primality using a function |
| [Program_5_FibonacciSeries.c](8.Functions/Program_5_FibonacciSeries.c) | Print a Fibonacci series using a function |
| [Program_6_PrimeSeries.c](8.Functions/Program_6_PrimeSeries.c) | Print prime numbers using a function |
| [Program_7_LargestElement.c](8.Functions/Program_7_LargestElement.c) | Find the largest array element using a function |
| [Program_8_StringReverse.c](8.Functions/Program_8_StringReverse.c) | Reverse a string using a function |
| [Program_9_StringPalindrome.c](8.Functions/Program_9_StringPalindrome.c) | Check a string for palindrome using a function |

## Revision Notes and Viva Questions

### Strings

- [String revision notes](7.Strings/strings_notes.md)
- [String viva questions](7.Strings/strings_viva.md)

### Functions

- [Functions revision notes](8.Functions/functions_notes.md)
- [Functions viva questions](8.Functions/functions_viva.md)

### Structures and Pointers

- [Structures and pointers revision notes](9.Structures-Pointers/sp_notes.md)
- [Structures and pointers viva questions](9.Structures-Pointers/sp_viva.md)

## Structures and Pointers

| Program | Topic |
| --- | --- |
| [Program_1_StudentStructure.c](9.Structures-Pointers/Program_1_StudentStructure.c) | Read and display student details using a structure |
| [Program_2_MultipleStudents.c](9.Structures-Pointers/Program_2_MultipleStudents.c) | Store and display multiple students using a structure array |
| [Program_3_HighestMarks.c](9.Structures-Pointers/Program_3_HighestMarks.c) | Find the student with the highest marks |
| [Program_4_StudentFunctions.c](9.Structures-Pointers/Program_4_StudentFunctions.c) | Read and display student details using functions |
| [Program_5_PointerBasics.c](9.Structures-Pointers/Program_5_PointerBasics.c) | Display a variable value, address, and dereferenced value |
| [Program_6_SwapPointers.c](9.Structures-Pointers/Program_6_SwapPointers.c) | Swap two numbers using pointers |
| [Program_7_ArrayPointers.c](9.Structures-Pointers/Program_7_ArrayPointers.c) | Access array elements using pointers |
| [Program_8_SearchPointer.c](9.Structures-Pointers/Program_8_SearchPointer.c) | Search an array element using pointers |
| [Program_9_StructurePointer.c](9.Structures-Pointers/Program_9_StructurePointer.c) | Access structure members using a structure pointer |

## Compile and Run

Install GCC and confirm it is available from the terminal:

```powershell
gcc --version
```

To compile and run a program on Windows:

```powershell
cd 7.Strings
gcc Program_1_Length.c -o Program_1_Length.exe
.\Program_1_Length.exe
```

To compile and run from Linux, macOS, or Git Bash:

```bash
cd 7.Strings
gcc Program_1_Length.c -o Program_1_Length
./Program_1_Length
```

From the repository root, a function program can be compiled with:

```powershell
gcc 8.Functions/Program_1_Factorial.c -o 8.Functions/Program_1_Factorial.exe
.\8.Functions\Program_1_Factorial.exe
```

## Author

This repository documents my first-year Computer Science learning journey in C programming.

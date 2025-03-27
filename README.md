# c-input-string-library
its' a c library that gives a input string function that mixed the fgets and in input(in python) functions, the functions will be safe and free the buffer if the user input longer than expected .


# compile / usage
1. run `make folder` : to creat `/objs/` and `/bin/` folders.
2. run `make` : to compile `/testSrc/test.c` and `/src/inputStrLib` .
3. no you can use the **object** file of the library `/objs/inputStrLib.o` and get **header** file from `/headers/inputStrLib.h` and you are ready to go.
4. to run the test `make playTest` .


# refrence

## `int inputStr(const char *msg, char *dst, size_t buff);`
take a string pointer dstination with fixed buffer(size) and put in it the use input string , the function is memory **safe** unless you pass a invalid buffer size :( , and it will automatic free fgets overflow .

if the input was larger than the buffer the strin will be `'\0'` , and return code : `-1`.

the function will replace '\n' be '\0'.

- Function prametrs :
  - char *mgs : string will prompt for the user like `username :`.
  - char *dst : the distination for the input.
  - size_t buff : lenght of the string includeing '\0'.
- Function return :
  - `-1` if user input longer string than expected.
  -  `0` if the use input nothing.
  -  `1` succed.

---

#:include "variadic functions.h"

#include <stdio.h>

#include <stdarg.h>

print strings Prints strings, followed by a new line @separator: The string to be printed between strings en: The number of strings passed to the function. @...: A variable number of strings to be printed.

Description: If separator is NULL, it is not printed. If one of the strings if NULL, (nil) is printed instead 7 void print_strings(const char *separator, const unsigned int n

va list strings;

char *str;

unsigned int index;

va_start(strings, n);

for (index 0; index < n; index++)

str va_arg(strings, char *);

if (str NULL) printf("(nil)");

else

printf("%s", str);

if (index 1 (n - 1) && separator I- NULL)

printf("%s", separator);

printf("\n");

va_end(strings);
































~
~
~
~
~
~
~
~
~

































































~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
                                                         0,0-1         All


::#include "main.h"
// Prototype
void _puts_recursion(char *s);

// Function definition
void _puts_recursion(char *s)
{
    // Base condition
    if (*s == '\0')
    {
        printf("\n");
        return;
    }

    // Recursive case
    printf("%c", *s);
    _puts_recursion(s + 1);
}


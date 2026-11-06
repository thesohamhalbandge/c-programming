// Topic: Your first C program, and the parts every C program has.
// Output: Hello, World!

// #include is a preprocessor directive: it pulls another file into this one
// before compilation starts. <stdio.h> is the "standard input/output" header,
// and it declares printf so the compiler knows how printf should be called.
#include <stdio.h>

// main is the function where every C program starts running.
// "int" means main gives back a whole number when it finishes.
// "(void)" means main takes no inputs.
int main(void)
{ // The curly braces mark the start and end of the function's body.

    // printf prints text to the terminal. Text in double quotes is a "string".
    // Every statement in C ends with a semicolon.
    // Nothing here moves to a new line, so your shell prompt may appear
    // straight after the text. The next program shows how to fix that.
    printf("Hello, World!");

    // The value returned from main goes to the operating system.
    // 0 means "the program finished successfully".
    return 0;
}

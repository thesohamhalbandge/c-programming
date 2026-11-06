// Topic: Format specifiers, which print values inside a string.
//
// A format specifier starts with % and acts as a placeholder in printf's string.
// printf replaces it with the value given after the string.
//
//   %d    int, a whole number such as 21
//   %f    double, a number with a decimal point such as 93.7
//   %.1f  double, rounded to 1 digit after the decimal point
#include <stdio.h>
int main()
{
    // Without a format specifier, the number is just part of the fixed text.
    printf("Hello, I am 21 years old\n");

    // format specification
    // The string stays the same, so only the value needs to change.
    printf("Hello, I am %d years old\n", 21); // Hello, I am 21 years old
    printf("Hello, I am %d years old\n", 22); // Hello, I am 22 years old

    // using two format specifications
    // Values fill the placeholders in order: the first %d gets 23, the second gets 24.
    printf("Hello, I am %d years old and next year I will be %d years old\n", 23, 24); // Hello, I am 23 years old and next year I will be 24 years old

    // The specifier must match the value's type. 93.5 is a double, not an int, so
    // %d is wrong here. The compiler warns about it, and the result is undefined
    // behaviour, meaning C makes no promise about what gets printed.
    // format specifies type 'int' but the argument has type 'double' [-Wformat]
    // printf("My average grade is %d\n", 93.5);

    // %f prints 6 digits after the decimal point by default.
    printf("My average grade: %f\n", 93.7); // My average grade: 93.700000

    // The .1 between % and f is the "precision": how many decimal digits to show.
    printf("My average grade: %.1f\n", 93.7); // My average grade: 93.7

    return 0;
}

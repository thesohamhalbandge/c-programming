// Topic: Arithmetic operators.
//
//   +  addition         -  subtraction      *  multiplication
//   /  division         %  remainder (also called modulo)
//
// An expression such as 5 * 10 is worked out first, and its result is what gets
// passed to printf. Inside a printf string, %d is a placeholder, while in the
// expression 10 % 3 the % is the remainder operator. Same symbol, different job.
//
// Output:
//   The addition of 5 and 10: 15
//   The subtraction of 5 and 10: -5
//   The multiplication of 5 and 10: 50
//   The division of 10 when divided by 5: 2
//   The remainder of 10 when divided by 3: 1
#include <stdio.h>
int main()
{
    // The first two values fill the text, and 5 + 10 is a separate calculation.
    // The compiler can't tell if the text and the calculation disagree, so it's
    // up to you to keep them matching.
    printf("The addition of %d and %d: %d\n", 5, 10, 5 + 10);

    // Results can be negative: %d prints -5 here.
    printf("The subtraction of %d and %d: %d\n", 5, 10, 5 - 10);
    printf("The multiplication of %d and %d: %d\n", 5, 10, 5 * 10);

    // Dividing two ints gives an int, and any fractional part is thrown away.
    // 10 / 5 is exactly 2, but 7 / 2 would give 3, not 3.5.
    printf("The division of %d when divided by %d: %d\n", 10, 5, 10 / 5);

    // % gives what is left over after division: 10 / 3 is 3, with 1 left over.
    // It only works on integers, not on values such as 93.7.
    printf("The remainder of %d when divided by %d: %d\n", 10, 3, 10 % 3);

    // There is no "return 0;" here. Since C99, reaching the closing brace of
    // main counts as returning 0. This special rule applies only to main.
}

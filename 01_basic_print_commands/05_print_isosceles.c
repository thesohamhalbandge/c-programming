// Topic: Drawing a shape (an isosceles triangle) with text.
//
// Spaces inside a string are printed exactly as written, so they can be used to
// position characters. The spaces outside a string, such as the indentation of
// the code, have no effect on the output.
//
// Output:
//     *
//    ***
//   *****
#include <stdio.h>
int main()
{
    // Each row has 2 more stars and 1 less leading space than the row above it.
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");

    return 0;
}

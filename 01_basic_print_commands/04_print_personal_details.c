// Topic: Using several printf statements, which run in order.
//
// Statements run from top to bottom. printf does not add a line break by
// itself, so each string needs its own \n to put the next text on a new line.
//
// Output:
//   Full Name: Brad Pitt
//   Age: 55
//   Gender: Male
#include <stdio.h>
int main()
{
    // One printf per line is easier to read than one long string.
    // The program's output is the same either way.
    printf("Full Name: Brad Pitt\n");
    printf("Age: 55\n");
    printf("Gender: Male\n");

    return 0;
}

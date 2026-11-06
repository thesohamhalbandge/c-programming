// Topic: Printing several lines of labelled text with a single printf.
//
// Output:
//   First Name: Arthur
//   Last Name: Morgan
#include <stdio.h>

// int main() vs int main(void):
// Both work the same way for a main that is defined like this.
// (void) says outright that the function takes no inputs, so it is the more
// precise way to write it. Empty () is very common in older code and tutorials.
int main()
{
    printf("First Name: Arthur \nLast Name: Morgan\n");

    return 0;
}

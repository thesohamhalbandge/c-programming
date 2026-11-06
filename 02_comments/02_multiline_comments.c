// Topic: Multi-line (block) comments.
//
// A block comment starts with slash-star and ends at the first star-slash, and
// it can cover as many lines as you need. Block comments cannot be nested: the
// first star-slash ends the comment, even if another one was opened inside it.
//
// Output: Hello World!
#include <stdio.h>
int main()
{
    /*

    This is a multiline comment

    - Program to print Hello World!
    - Printing out functionality is done by
        printf command
    - For e.g. printf("Hello World!")

    */
   printf("Hello World!");
   return 0;
}

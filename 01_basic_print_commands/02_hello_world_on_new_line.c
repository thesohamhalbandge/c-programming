// Topic: The newline escape sequence, \n
//
// An "escape sequence" is a backslash plus a character that together stand for
// something that is hard to type inside a string. \n means "move to a new line".
// It is written as two characters but counts as one character in the string.
//
// Output:
//   Hello
//   World
//   from
//   C
//   language!
#include <stdio.h>
int main(void)
{
    // One printf can print many lines, one for each \n in the string.
    // The space before each \n is printed too, but you can't see it on screen.
    printf("Hello \nWorld \nfrom \nC \nlanguage!\n");

    return 0;
}

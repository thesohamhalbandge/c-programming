// Topic: Drawing an X shape by positioning characters with spaces.
//
// Output:
//    *     *
//     *   *
//      * *
//       *
//      * *
//     *   *
//    *     *
#include <stdio.h>
int main()
{

    // The top 3 rows and the bottom 3 rows are mirror images of each other.
    printf(" *     *\n");
    printf("  *   *\n");
    printf("   * *\n");

    // 4 leading spaces put this star in the middle of the rows above and below.
    printf("    *\n");
    printf("   * *\n");
    printf("  *   *\n");
    printf(" *     *\n");


    return 0;
}

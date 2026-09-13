/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;

    int result1, result2, result3, result4;

    result1 = a + b * c;
    printf("\n Result 1 = %d", result1);

    result2 = (a + b * c) / 2;
    printf("\n Result 2 = %d", result2);

    result3 = a + b * c / 2;
    printf("\n Result 3 = %d", result3);

    result4 = a + b / c * 2;
    printf("\n Result 4 = %d", result4);

    return 0;
}

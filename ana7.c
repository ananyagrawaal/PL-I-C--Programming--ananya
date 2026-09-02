/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, temp;

    a = 111;
    b = 222;

    printf("\n Before swapping:");
    printf("\n a = %d, b = %d \n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping: ");
    printf("\n a = %d, b = %d \n", a, b);

    return 0;
}




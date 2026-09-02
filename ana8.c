/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("\n Enter first number: ");
    scanf("%d", &a);

    printf("\n Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("\n After swapping: \n");
    printf("\n First number = %d \n", a);
    printf("\n Second number= %d \n", b);

    return 0;
}

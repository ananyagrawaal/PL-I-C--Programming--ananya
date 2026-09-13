/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n Multiplication Table of %d\n", num);

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    while (i <= 10);

    return 0;
}

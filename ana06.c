/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, total;
    float average;

    printf(" Enter first number: ");
    scanf("%d", &num1);

    printf(" Enter second number: ");
    scanf("%d", &num2);

    printf(" Enter third number: ");
    scanf("%d", &num3);

    total = (num1 + num2 + num3);
    average = total / 3;

    printf(" Average: %f", average);

    return 0;
}


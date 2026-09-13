/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd.");
    }

    return 0;
}

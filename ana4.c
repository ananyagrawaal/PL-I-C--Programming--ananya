/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    float radius, area;
    
    printf("\n enterthe radius of the circle:");
    scanf("%f" , & radius);
    area = (3.14 *radius* radius);
    printf("\n area of circle = %f" , area);
    
    return 0;
}
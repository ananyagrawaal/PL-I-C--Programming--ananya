/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;
    
    printf("\n enter student roll number:");
    scanf("%d" , & rollnum);
    printf("\n enter student percentage:");
    scanf("%f" , & per);
    printf("\n enter student grade:");
    scanf("%c" , & grade);
    
    printf("\n___student infromation___\n");
    printf("\n roll number is: %d" , rollnum);
    printf("\n percentage is: %f" , per);
    printf("\n grade: %c" , grade);
    
    return 0;
}
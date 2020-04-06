#include<stdio.h>
#include<stdlib.h>
int main()
{
    float bs,da,ta;
    printf("Enter basic salary\n");
    scanf("\n%f",&bs);
    da=((10/bs)*100);
    ta=((12/bs)*100);
    printf("\nBASIC SALARY=%f",bs);
    printf("\nDA = %f",da);
    printf("\nTA = %f",ta);
    printf("\nNET SALARY= = %f %f %f\n",(bs+da+ta));
    return 0;

}
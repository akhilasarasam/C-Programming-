#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    printf("\nEnter your age\n");
    scanf("\n%d",&age);
    if(age>=60)
    printf("\nPENSION AMOUNT : Rs.%d\n",10000);
    else if(age>=50)
    printf("\nPENSION AMOUNT : Rs.%d\n",5000);
    else
    {
     printf("\nPENSION AMOUNT : Rs.%d\n",0);
    }
    
    return 0;

}
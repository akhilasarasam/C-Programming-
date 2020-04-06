#include<stdio.h>
#include<stdlib.h>
int main()
{
    float n;
    printf("\nEnter a number\n");
    scanf("%f",&n);
    if(n>0)
    printf("\nNumber is positve\n");
    else if(n==0)
    printf("\nNumber is 0\n");
    else
    {
        printf("\nNumber is negative\n");
    }
   return 0;

}
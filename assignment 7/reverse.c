#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,rev=0,rem;
    printf("\nEnter number to be reversed\n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

    }
    printf("\nReversed number is %d\n",rev);
    return 0;

}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[2],g=0;
    printf("\nEnter the three numers\n");
    for(int i=0;i<3;i++)
    {
        printf("\nEnter number %d\n",(i+1));
        scanf("\n%d",&a[i]);
        if(a[i]>=g)
        g=a[i];

    }
    printf("\nGreatest number is %d\n",g);
    return 0;
}
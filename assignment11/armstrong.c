#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,r,k=0,c=0;
    printf("\nEnter the number\n");
    scanf("%d",&n);
    int orig=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    int u=c;
    n=orig;
    while(n!=0)
    {
        r=n%10;
        k= k+ pow(r,u);
        n=n/10;

    }
    if(k==orig)
    {
        printf("\nArmstrong number\n");
    }
else
{
    printf("\nNon-Armstrong number\n");
}

}

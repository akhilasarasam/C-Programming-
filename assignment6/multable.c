#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b;

    printf("\nEnter the number\n");
    scanf("%f",&a);
    for(int i=1; i<11;i++)
    {
      b=i*a;
      printf("%f x %d = %f\n",a,i,b);
    
    }
    return 0;
    
}
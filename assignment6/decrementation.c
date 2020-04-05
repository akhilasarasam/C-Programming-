#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
printf("\nEnter a number\n");
scanf("%d",&a);
int i=0;
do 
{
    printf("\nThe value in iteration %d is %d\n",i,(a-i));
    i++;
}
while (i<=a);

 return 0;   
    
}

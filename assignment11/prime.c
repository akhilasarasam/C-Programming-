#include<stdio.h>
int prime();
int main()
{
    int n,p;
    printf("\nEnter number\n");
    scanf("%d",&n);
    if(n==1)
    { printf("Number neither prime nor composite\n");
    }
    else
    {
    
    p = prime(n);
    if(p==2)
    {
      
      printf("\nPrime Number\n");
    }
    else if(p!=2)
    {
      printf("\nComposite Number\n");
    }
    }
  return 0;  

}
   int prime(int a) 
   {
     int count=0;
     for (int i=1;i<=a;i++)
     {
         int k=a%i;
         if(k==0)
         count=count+1;


     }
     return count;
   }


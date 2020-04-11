#include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 int main()
 {
   char str[100];
   int a=0,b=0,c=0;
   printf("Enter a string: ");
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++)
   {
       if(isalpha(str[i]))
       {
           a=a+1;
       }
       else if(isdigit(str[i]))
       {
          b=b+1;
       }
       else
       {
           c=c+1;
       }
   }
      printf("\nNumber of Alphabets = %d\n",a);
      printf("\nNumber of Digits = %d\n",b);
      printf("\nNumber of Other characters = %d\n",c);
      return 0;
   }
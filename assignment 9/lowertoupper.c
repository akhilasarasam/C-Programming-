#include<stdio.h>
 #include<string.h>
 #include<ctype.h>
 int main()
 {
   char str[100];

   printf("Enter a string: ");
   scanf("%s",str);
   for(int i=0;str[i]!='\0';i++)
   {
       if(isupper(str[i]))
       {
           str[i]=tolower(str[i]);
       }
       else if(islower(str[i]))
       {
           str[i]=toupper(str[i]);
       }
       else
       {
           printf("\nNot an Alphabet\n");
       }
   }
      printf("\nNew String : %s\n",str); 
      return 0;
   }
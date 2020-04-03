 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main()
 {
     char name[20];
     float marks[30];
     int i,n;
     float sum=0;
     printf("enter your name\n");
     scanf("%s",name);
     printf("\nEnter the number of subjects\n");
     scanf("%d",&n);
     printf("enter marks in n subjects\n");
     for(i=0;i<n;i++)
     {
         printf("enter element-%d:",i);
         scanf("\n %f",&marks[i]);
         sum=sum+marks[i];
     }

     printf("Name: %s \n",name);
     printf("Marks:\n");
     for(i=0;i<n;i++)
     {
         printf("\nMarks in subject %d :",i);
        
         printf(" %f",marks[i]);
     }
     printf("\nAverage of the marks is:%f",(sum/n) );
     return 0;

 }
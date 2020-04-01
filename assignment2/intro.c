 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main()
 {
     char name[20];
     char schl[50];
     int age,class,marks[5],i;
     printf("enter your name\n");
     scanf("%s",name);
     printf("\nenter school\n");
     scanf("%s",schl);
     printf("\nEnter age and class\n");
     scanf("%d",&age); printf("\n");
     scanf("%d",&class);printf("\n");
     printf("enter marks in 6 subjects\n");
     for(i=0;i<6;i++)
     {
         printf("enter element-%d:",i);
         scanf("\n %d",&marks[i]);
     }
     printf("Name: %s \n",name);
     printf("School: %s\n",schl);
     printf("Age: %d\n",age);
     printf("Class: %d\n",class);
     printf("Marks:\n");
     for(i=0;i<6;i++)
     {
         printf("\nMarks in subject : %d",i);
        
         printf(" %d",marks[i]);
     }
     return 0;
 }
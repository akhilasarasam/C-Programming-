 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     int i,n;
     float p,r,t,si;
     printf("enter Principal Amount\n");
     scanf("%f",&p);
     printf("Enter annual rate of interest\n");
     scanf("%f",&r);
     printf("enter time(in years)\n");
     scanf("%f",&t);
     printf("Principal amount:%f\nAnnual rate of interest:%f\nTime (in years):%f",p,r,t);
     printf("\nSimple Interest:%f\n",p*r*t);
     
     return 0;

 }
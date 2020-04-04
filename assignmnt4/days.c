#include<stdio.h>
#include<stdlib.h>
int main()
{
int num;
printf("DAYS OF THE WEEK!!\nSelect a number from 1-7\n");
scanf("%d",&num);
switch(num)
{
    case 1:
    printf("\nMONDAY");
    break;

    case 2:
    printf("\nTUESDAY");
    break;
    case 3:
    printf("\nWEDNESDAY");
    break;
    case 4:
    printf("\nTHURSDAY");
    break;
    case 5:
    printf("\nFRIDAY");
    break;
    case 6:
    printf("\nSATURDAY");
    break;
    case 7:
    printf("\nSUNDAY");
    break;
    default:
    printf("ERROR!! NUMBER NOT BETWEEN 1 AND 7\n");
}
return 0;
}
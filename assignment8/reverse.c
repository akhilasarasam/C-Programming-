#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[100],revstr[100];
    printf("\nEnter a string\n");
    scanf("%s",str);
    int l=strlen(str),j=0;

    for(int i=l-1;i>=0;i--)
    {
        revstr[j]=str[i];
        j++;
    }
    revstr[l]='\0';
    printf("%s\n",revstr);
    return 0;
}
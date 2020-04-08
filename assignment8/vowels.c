#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("\nEnter a string\n");
    scanf("%s",ch);
    int l=strlen(ch),j=0;

    for(int i=l-1;i>=0;i--)
    {
        if (ch[i] == 'a' || ch[i] == 'e'
            || ch[i] == 'i' || ch[i] == 'o'
            || ch[i] == 'u' || ch[i] == 'A'
            || ch[i] == 'E' || ch[i] == 'I'
            || ch[i] == 'O' || ch[i] == 'U') 
        j=j+1;
    }
    printf("\nNumber of vowels is %d\n",j);
    return 0;
}
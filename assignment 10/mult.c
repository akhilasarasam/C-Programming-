#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],m[10][10],i,j,k,r1,r2,c1,c2,s=0;
    printf("\nEnter rows and columns for first matrix\n");
    scanf("\n%d %d",&r1,&c1);
    printf("\nEnter rows and columns for second matrix\n");
    scanf("\n%d %d",&r2,&c2);

    if(c1==r2)
    {
        printf("\nEnter elements for first matrix\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            scanf("\n%d",&a[i][j]);
        }

         printf("\nEnter elements for second matrix\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            scanf("\n%d",&b[i][j]);
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                m[i][j]=m[i][j]+a[i][k]*b[k][j];
            }
            
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d\t",m[i][j]);
                if(j==c2 -1)
                printf("\n");
            }
        }
        
        
    }
    else
    {
        printf("\n Invalid\n");
    }
    return 0;
    
}
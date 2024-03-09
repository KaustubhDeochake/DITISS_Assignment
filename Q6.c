#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],total=0,i,j,k;
    printf("Enter 1st 3*3 matrix element : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 2nd 3*3 matrix element : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Multiplying two matrix element : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            total=0;
            for(k=0;k<3;k++)
            {
                total=total+a[i][k]*b[k][j];
            }
            c[i][j]=total;
        }
    }
    printf("\nMultiplication result of 2 element :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
void acceptarr(int arr[4])
{
    printf("Enter 4 element for array:\n");
    for(int i=0;i<4;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
}
void disparr(int arr[4])
{
    printf("[");
    for(int i=0;i<4;i++)
    {
        printf("%d",arr[i]);
        if (i!=3)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
void sum(int a[4],int b[4],int c[4])
{
    for(int i=0;i<4;i++)
    {
        c[i]=a[i]+b[i];
    }
}
void sub(int a[4],int b[4],int c[4])
{
    for(int i=0;i<4;i++)
    {
        c[i]=a[i]-b[i];
    }
}
void mul(int a[4],int b[4],int c[4])
{
    for(int i=0;i<4;i++)
    {
        c[i]=a[i]*b[i];
    }
}
void div(int a[4],int b[4],int c[4])
{
    for(int i=0;i<4;i++)
    {
        if(b[i]!=0)
        {
            c[i]=a[i]/b[i];
        }else{
            c[i]=0;
        }
    }
}
int main()
{
    int a[4],b[4],c[4],i;
    printf("Enter element for 1st array:\n");
    acceptarr(a);
    printf("\n 1st array:");
    disparr(a);

    printf("Enter element for 2nd array:\n");
    acceptarr(b);
    printf("\n 2nd array:");
    disparr(b);

    sum(a,b,c);
    printf("\nSum of Array:");
    disparr(c);

    sub(a,b,c);
    printf("\nSubtraction of Array:");
    disparr(c);

    mul(a,b,c);
    printf("\nMultiplication of Array:");
    disparr(c);

    div(a,b,c);
    printf("\nDivision of Array:");
    disparr(c);

    return 0;    
}
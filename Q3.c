#include<stdio.h>

int acceptnum();
void calfibonacci(int num);
int main()
{
    int num;
    printf("Enter a number: ");
    num=acceptnum();
    printf("Fibonacci sequences are :");
    calfibonacci(num);
    return 0;
}
int acceptnum()
{
    int num;
    scanf("%d",&num);
    return num;
}
void calfibonacci(int num)
{
    int a=0,b=1,c,i;    
    for(int i=1;i<=num;++i)
    {
        printf("%d, ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
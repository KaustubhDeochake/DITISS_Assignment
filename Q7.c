#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    int num=(atoi(argv[1]));
    printf("Table for %d:\n",num);
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",num*i);
    }
    if (argc!=2)
    {
        printf("\nArgument : %s",argv[0]);
        return 1;
    }
    return 0;
}
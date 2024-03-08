#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    
    int max=atoi(argv[1]);
    for(int i=2;i<argc;i++)
    {
        int num=atoi(argv[i]);
        if(num>max)
        {
            max=num;
        }
    }
    printf("Maximum number : %d\n",max);
    if (argc<2)
    {
        printf("\nArgument : %s",argv[0]);
        return 1;
    }
}
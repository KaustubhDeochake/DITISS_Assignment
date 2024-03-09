#include<stdio.h>
void chara(char a);
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    chara(a);
}
void chara(char a)
{
    if(a>='A' && a<='Z')
    {
        printf("Uppercase Character are :%c\n",a);
    }
    else if(a>='a' && a<='z')
    {
        printf("Lowercase Character are :%c\n",a);
    }
    else if(a>='0' && a<='9')
    {
        printf("Digit are :%c\n",a);
    }
    else
    {
        printf("Other Character are :%c\n",a);
    }
}
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    printf("Enter the marks of subject-1 : ");
    scanf("%d",&m1);
    printf("Enter the marks of subject-2 : ");
    scanf("%d",&m2);
    printf("Enter the marks of subject-3 : ");
    scanf("%d",&m3);
    printf("Enter the marks of subject-4 : ");
    scanf("%d",&m4);
    printf("Enter the marks of subject-5 : ");
    scanf("%d",&m5);
    if(m1<=20 && m2<=20 && m3<=20 && m4<=20 && m5<=20)
    {
        total=m1+m2+m3+m4+m5;
        if(total>=90)
        {
        printf("Grade : Excellent");
        }
        else if (total> 90 && total>=80) 
        {
            printf("Grade: A\n");
        } else if (total> 80 && total>=70) 
        {
            printf("Grade: B\n");
        } else if (total > 70 && total>=60) 
        {
            printf("Grade: C\n");
        } else {
            printf("Grade: F\n");
        }
    }
    else{
        printf("Marks should be less than 20.\n");
    }
    return 0;
}
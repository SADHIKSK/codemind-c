#include<stdio.h>
int main()
{
    int num,s=0;
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            s+=i;
        }
    }
    if(s>num)
    printf("True");
    else
    printf("False");
}
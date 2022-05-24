#include<stdio.h>
int main()
{
    int num,larg=0,x;
    scanf("%d",&num);
    while(num)
    {
        x=num%10;
        if(x>larg)
        {
            larg=x;
        }
        num/=10;
    }
    printf("%d",larg);
}
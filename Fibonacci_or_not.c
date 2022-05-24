#include<stdio.h>
int main()
{
    int first=0,second=1,next=0,num;
    scanf("%d",&num);
    while(num>next)
    {
        next=first+second;
        first=second;
        second=next;
    }
    if(num==next)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
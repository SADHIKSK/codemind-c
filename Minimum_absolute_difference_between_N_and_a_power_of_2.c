#include<stdio.h>
int main()
{
    int num,rightp=2,leftp=2;
    scanf("%d",&num);
    while(leftp*2<=num)
    {
        leftp*=2;
    }
    while(rightp<=num)
    {
        rightp*=2;
    }
    if(num-leftp<rightp-num)
    {
        printf("%d",num-leftp);
    }
    else
    {
        printf("%d",rightp-num);
    }
}
#include<stdio.h>
int main()
{
    int n,sum=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        p*=n%10;
        n/=10;
    }
    printf("%d",p-sum);
}
#include<stdio.h>
int main()
{
    int a,b,r,c,co,n;
    scanf("%d%d",&a,&b);
    for(;a<=b;a++)
    {
        n=a;
        co=0;
        c=0;
        while(n)
        {
            r=n%10;
            n/=10;
            co++;
            if(r==0)
            break;
            if(a%r==0)
            c++;
        }
        if(c==co)
        {
            printf("%d ",a);
        }
    }
}
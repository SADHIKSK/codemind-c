#include<stdio.h>
int main()
{
    int a,b,r,c,co,num;
    scanf("%d%d",&a,&b);
    for(;a<=b;a++)
    {
        num=a;
        co=0;
        c=0;
        while(num)
        {
            r=num%10;
            num/=10;
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
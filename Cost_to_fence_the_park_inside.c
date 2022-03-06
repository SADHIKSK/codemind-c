#include<stdio.h>
int main()
{
    int l,b,w,c,tc,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l*b)-(l-2*w)*(b-2*w);
    tc=area*c;
    if(l<=w+w || b<=w+w)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",tc);
    }
}
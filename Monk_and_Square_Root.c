#include<stdio.h>
int main()
{
    int t,a,b,fl;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&b,&a);
        fl=0;
        for(int i=0;i<=a;i++)
        {
            long int temp=(long int)i*i;
            if(temp%a==b){
                printf("%d
",i);
                fl=1;
                break;
            }
        }
        if(fl==0)
            printf("-1
");
    }
}
#include<stdio.h> 
int main()
{
int number;
scanf("%d",&number); 
for (int j,i=number;i>=1;i--)
{
   j=1;
   for(;j<=i;j++)
   { 
    printf("%d",j);
   }
   printf("
");
}
}


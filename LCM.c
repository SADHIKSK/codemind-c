#include <stdio.h>
int main()
{
	int x,y,i=1;
	scanf("%d %d",&x,&y);
	while(x*i%y !=0)
	{
		i++;
	}
	printf("%d",x*i);
}
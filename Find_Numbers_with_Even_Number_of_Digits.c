/* Find Number with Even Number of Digits */
#include<stdio.h>
int even(int *arr,int ele)
{
	int i,count,temp,all=0;
	for(i=0;i<ele;i++)
    {
        scanf("%d",&arr[i]);
        count=0,temp=arr[i];
        while(temp)
        {
            temp/=10;
            count++;
        }
        if(count%2==0)
        {
            all++;
        }
    }
    return all;
}
int main()
{
    int ele,all=0,count=0,temp;
    scanf("%d",&ele);
    int arr[ele];
    printf("%d",even(arr,ele));
}
#include <stdio.h>
int main()
{
    int num1, rem1;
 
    scanf("%d", &num1);
    rem1 = num1 % 2;
    if (rem1 == 0)
        printf("Even");
        else
        printf("Odd");
        return 0;
}

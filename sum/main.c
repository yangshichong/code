#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,i;
    int sum;

    while(~scanf("%d",&b))
    {
    sum=0;
    for(i=1;i<b+1;i++)
    {
        sum=sum+i;
    }

    printf("%d\n\n",sum);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,temp,i;

    while(scanf("%d",&n)!=EOF){
            int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        a[i]=temp;
    }
    scanf("%d",&m);
    for(i=0;i<n;i++){
    if(m==a[i]){
        printf("%d\n",i);
        break;
    }
    }
    if(i==n)
        printf("-1\n");
    }
    return 0;
}


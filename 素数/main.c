#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool judge(int x){
    int i;
    if(x<=2)
        return false;
     int bound=sqrt(x);
        for(i=2;i<=bound;i++)  //bound代替sqrt(n)可避免在for循环中重复计算
        {
           if(x%i==0)
            return false;
        }
        if(i>sqrt(x))
            return true;
}
int main()
{
    int n,i,bound,num;
    int temp[1000];
    while(scanf("%d",&n)!=EOF){
        num=0;
        for(i=2;i<=n;i++){
       if(judge(i)&&i%10==1)
            temp[num++]=i;
        }
        if(num==0)
            printf("-1\n");
        else{

        for(i=0;i<num-1;i++){
            printf("%d ",temp[i]);
        }
        printf("%d\n",temp[i]);
        }

    }
    return 0;
}

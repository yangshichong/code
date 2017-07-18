#include <iostream>
#include<cstdio>
using namespace std;
bool issushu(int num)
{
    bool flag=true;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n,num,i;
    while(scanf("%d",&n)!=EOF){
            num=0;
            int a[10000]={0};
        for(i=2;i<n;i++){
            if(issushu(i)&&(i%10==1)){
                a[num++]=i;
            }
        }
        if(num==0)
            printf("-1\n");
        else
        {
            for(i=0;i<num-1;i++)
                printf("%d ",a[i]);
            printf("%d\n",a[i]);


        }

        }





    return 0;
}

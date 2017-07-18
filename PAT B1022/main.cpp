#include<cstdio>
int main(){
    int num1,num2,sum,base;
    int result[31]={};
    int num=0;
    scanf("%d%d%d",&num1,&num2,&base);
    sum=num1+num2;
    do
    {
        result[num++]=sum%base;
        sum=sum/base;

    }while(sum!=0);
    for(int i=num-1;i>-1;i--)
        printf("%d",result[i]);
}

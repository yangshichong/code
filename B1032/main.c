#include <stdio.h>
#include <stdlib.h>
#define maxn 100010
//const int maxn=100010;

int main()
{
int school[maxn]={0};
int n,num,score,i;
int maxs=0;
int sid;
scanf("%d",&n);
for(i=1;i<=n;i++){
        scanf("%d%d",&num,&score);
        school[num]+=score;
}
for(i=1;i<=n;i++){
    if(school[i]>maxs)
    {
        maxs=school[i];
        sid=i;
    }
}
printf("%d %d",sid,maxs);
return 0;
}

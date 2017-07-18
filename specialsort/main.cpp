#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int N,i;
    int a[1000];
    while(scanf("%d",&N)!=EOF){
            for(i=0;i<N;i++){
                scanf("%d",&a[i]);
            }
            if(N==1){
                printf("%d\n",a[0]);
                printf("-1\n");
            }
            else{
                sort(a,a+N);
                for(i=0;i<N-1;i++){
                    printf("%d ",a[i]);
                }
                printf("\n");
            }


    }

    return 0;
}

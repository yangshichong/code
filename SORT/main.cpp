#include <iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}

int main()
{
    int n,i;
    int a[100];

    while(scanf("%d",&n)!=EOF){
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
        for(i=0;i<n;i++){
        cout<<a[i]<<' ';

    }
    cout<<endl;
    }

    return 0;
}

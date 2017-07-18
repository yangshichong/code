#include <iostream>
#include<map>
#include<stdio.h>
#include<string>
using namespace std;
/*这个题的思路就是统计入度为零的节点个数*/
int main()
{
    int n;
    map<string,int> M;
    char str1[50],str2[50];
    string a,b;
    int in[2000];//入度数组
    int num=0;//选手的编号  同时是入度数组的下标
    int result=0;//标识入度的结果
    int i;
    while(scanf("%d",&n)!=EOF&&n!=0){
    M.clear();
    result=0;
    num=0;
    for(i=0;i<n;i++){
        scanf("%s%s",str1,str2);
        a=str1;b=str2;
        if(M.find(a)==M.end()){   ///处理获胜选手
          M[a]=num++;
        }
        if(M.find(b)==M.end()){   ///处理失败选手
          M[b]=num++;
        }
        in[M[b]]++;            ///失败选手  入度数组加一

    }
    for(i=0;i<num;i++){
        if(in[i]==0)
            result++;
    }
    if(result==1)
        printf("yes\n");
    else
        printf("no\n");
    }

    return 0;
}

#include <iostream>
#include<map>
#include<stdio.h>
#include<string>
using namespace std;
/*������˼·����ͳ�����Ϊ��Ľڵ����*/
int main()
{
    int n;
    map<string,int> M;
    char str1[50],str2[50];
    string a,b;
    int in[2000];//�������
    int num=0;//ѡ�ֵı��  ͬʱ�����������±�
    int result=0;//��ʶ��ȵĽ��
    int i;
    while(scanf("%d",&n)!=EOF&&n!=0){
    M.clear();
    result=0;
    num=0;
    for(i=0;i<n;i++){
        scanf("%s%s",str1,str2);
        a=str1;b=str2;
        if(M.find(a)==M.end()){   ///�����ʤѡ��
          M[a]=num++;
        }
        if(M.find(b)==M.end()){   ///����ʧ��ѡ��
          M[b]=num++;
        }
        in[M[b]]++;            ///ʧ��ѡ��  ��������һ

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

/*���ʶ�����ֻ��������
����������ȼ��ö�ά�����0��1�ж�
���ֺ������֮���ÿո�����Ϊ�˿���������λ�������ϵ�����
*/
#include <stdio.h>
#include<stack>
#include <stdlib.h>
#include<string.h>
using namespace std;
char str[200];
stack<int> stackop;
stack<double> stackin;
int priority[][5]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,1,1,1,0,0};
void getop(bool &retop,int &retin,int &index){
    if(str[index]!=NULL)///û���ַ�β��
    {

            if(str[index]>='0'&&str[index]<='9'){//�����֣���¼��ֵ
                retop=false;
                retin=str[index]-'0';
                index++;         //��Ҫ�����±�+1
                return;
            }
            else//��¼������
            {
                retop=true;//��retop��������  retin������0,1,2,3
                if(str[index]=='+')
                    retin=1;
                if(str[index]=='-')
                    retin=2;
                if(str[index]=='*')
                    retin=3;
                if(str[index]=='/')
                    retin=4;

                index++;
                return;

            }
    }
            if(str[index]==NULL)///�������ַ���β��
            {
                retop=true;
                retin=0;
                return;
            }

}
//
int main()
{
    int retn;bool reto;int i;
    int a,b,c,len;
    double temp;
    int j;
    //(gets(str))
    while(gets(str)){
    i=0;
    len=strlen(str);///���ʽ����
//    printf("%d",len);
    while(!stackin.empty())
        stackin.pop();
    while(!stackop.empty())
        stackop.pop();
    stackop.push(0);///�����������

    while(true){
    getop(reto,retn,i);//���ַ���ȡԪ��
    if(reto){                   //�ǲ�����
        if(stackop.empty()||priority[retn][stackop.top()]==1)//��ǰ��������ȼ�����ջ�������
            stackop.push(retn);
        else{
        while(priority[retn][stackop.top()]==0){                       //��ǰ��������ȼ�С��ջ�������
            a=stackin.top();
            stackin.pop();
            b=stackin.top();
            stackin.pop();
            c=stackop.top();
            stackop.pop();
            if(c==1)
                temp=b+a;
            if(c==2)
                temp=b-a;                   /*��ǰ�������ҲҪ�Ž�ȥ������*/
            if(c==3)
                temp=b*a;
            if(c==4)
                temp=b/a;
            stackin.push(temp);
        }
        stackop.push(retn);
        }
    }
    else//������
    {
        stackin.push(retn);//������ջ
 //       printf("%d",retin);
    }
//    printf("%d",i);
//    if(str[i]==NULL)
//        printf("66666");
//        break;
    if(stackop.size()==2&&stackin.size()==1&&stackop.top()==0)
        break;



    }
    printf("%d\n",stackin.top());
    memset(str,0,sizeof(str));
    }

    return 0;

}

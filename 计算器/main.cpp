/**
������˼·������ջ������ջ�������ջ��������ֵջ���ò�ͬ���ִ���+-/*�������α����ַ�����������ֱ��������ջ���������ջ����������ȼ�������ջ��
���򣬴�ջ����ջ����ȡ����ջ��������ջ���������㣬�����ѹ������ջ��Ϊ���ж������Ƿ����������ջ�Ŀ�ͷ��β
�������ȼ���͵ı����������������ջ��ʣ������������ʱ���������������ջ��ΨһԪ�ؼ�Ϊ�����

����������ȼ��ö�ά�����0��1�ж�

�ؼ����ں���void getop(bool &retop,int &retin,int &index)�����ַ�����ȡ���ֻ�������������ж�
�Ƿ����ַ���β���ٷ����ֻ������������bool retop��ǲ�����/���֣�retin������ֵ���������index��Ϊ�ַ����±�
**/
#include <stdio.h>
#include<stack>
#include <stdlib.h>
#include<string.h>
using namespace std;
char str[200];
stack<int> stackop;
stack<double> stackin;
int priority[][5]={1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,1,1,1,0,0};
/**���þ��Ǹ�������������൱��ʹ����ָ�룬�����õĲ������Ƕ�ԭ�����Ĳ���������˲������ݲ��ı�ԭֵ��ȱ��**/
void getop(bool &retop,int &retin,int &index){
    int temp;
    if(str[index]!=0)///û���ַ�β��
    {
        if(str[index]=='x'){
            retop=false;
            printf("������x��ֵ��");
            scanf("%d",&retin);
            getchar();///����ѻ������Ļ��з����գ�����Ӱ��gets()
            index++;
            return;
        }
            retin=0;
            while(str[index]>='0'&&str[index]<='9'){///�����֣���¼��ֵ
                retop=false;
                temp=str[index]-'0';
                retin=retin*10+temp;
                index++;         //��Ҫ�����±�+1
                if(!(str[index]>='0'&&str[index]<='9'))///���ֽ���������
                return;
            }
            if(!(str[index]>='0'&&str[index]<='9'))//��¼�����
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
            if(str[index]==0)///�������ַ���β��
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
    double a,b,c;
    double temp;
    int j;
    //(gets(str))
    while(gets(str)){
    i=0;
    while(!stackin.empty())
        stackin.pop();
    while(!stackop.empty())
        stackop.pop();
    stackop.push(0);///�����������

    while(true){
    getop(reto,retn,i);///���ַ���ȡԪ��
    if(reto){                   ///�ǲ�����
        if(stackop.empty()||priority[retn][stackop.top()]==1)///��ǰ��������ȼ�����ջ�������
            stackop.push(retn);
        else{
        while(priority[retn][stackop.top()]==0){                       ///��ǰ��������ȼ�С��ջ�������
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
            stackin.push(temp);///������������ջ
        }
        stackop.push(retn);///��ǰ��������ȼ�����ջ����������ȼ�����ǰ�������ջ��
        }
    }
    else//������
    {
        stackin.push((double)retn);//������ջ

    }

    if(stackop.size()==2&&stackop.top()==0)
        break;



    }
    printf("%.2lf\n",stackin.top());
    memset(str,0,sizeof(str));
    }

    return 0;

}

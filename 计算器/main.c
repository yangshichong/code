/*���ʶ�����ֻ��������
����������ȼ��ö�ά�����0��1�ж�
*/
#include <stdio.h>
#include<stack>
#include <stdlib.h>
#include<string.h>
char str[200];
stack<int> stackop;
stack<int> stackin;
int priority[][4]={0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0}
void getop(bool &retop,int &retin,int &index){
    if(str[index]!=' '&&str[index]!=0){
            if(str[index]>='0'&&str[index]<='9'){//�����֣���¼��ֵ
                retop=false;
                retin=str[index]-'0';
                return;
            }
            else{          //��¼������
                retop=true;//��retop��������  retin������0,1,2,3
                if(str[index]=='+')
                    retin=0;
                else if(str[index]=='-')
                    retin=1;
                else if(str[index]=='*')
                    retin=2;
                else(str[index]=='/')
                    retin=3;
                return;

            }

    }
    index++;
}
//
int main()
{
    int retin;bool retop;int index=0;
    int a,b,c,temp,len;

    while(gets(str)){
    len=strlen(str);//���ʽ����
    while(!stcakin.empty())
        stackin.pop();
    while(!stackop.empty())
        stackop.pop();

    for(i=0;i<len;i++){
    getop(retop,retin,index);//���ַ���ȡԪ��
    if(retop){                //�ǲ�����
        if(stackop.empty()||priority[retin][stackop.top()]==1)//��ǰ��������ȼ�����ջ�������
            stackop.push(retin);
        else{                       //��ǰ��������ȼ�С��ջ�������
            a=stackin.top();
            stackin.pop();
            b=stackin.top();
            stackin.pop();
            c=stackop.top();
            stackop.pop();
            if(c==0)
                temp=b+a;
            else if(c==1)
                temp=b-a;
            else if(c==2)
                temp=b*a;
            else
                temp=b/a;
            stackin.push(temp);
        }



    }
    else
        stackop.push(retin);//������ջ


    }
    }
    printf("%d",stackin.top);
    return 0;

}

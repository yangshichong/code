/*如何识别数字还是运算符
运算符的优先级用二维数组的0或1判断
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
            if(str[index]>='0'&&str[index]<='9'){//是数字，记录数值
                retop=false;
                retin=str[index]-'0';
                return;
            }
            else{          //记录操作符
                retop=true;//有retop存在所以  retin可以是0,1,2,3
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
    len=strlen(str);//表达式长度
    while(!stcakin.empty())
        stackin.pop();
    while(!stackop.empty())
        stackop.pop();

    for(i=0;i<len;i++){
    getop(retop,retin,index);//从字符串取元素
    if(retop){                //是操作符
        if(stackop.empty()||priority[retin][stackop.top()]==1)//当前运算符优先级大于栈顶运算符
            stackop.push(retin);
        else{                       //当前运算符优先级小于栈顶运算符
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
        stackop.push(retin);//数字入栈


    }
    }
    printf("%d",stackin.top);
    return 0;

}

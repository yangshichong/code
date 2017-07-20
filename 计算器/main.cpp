/**
计算器思路：两个栈，数字栈和运算符栈（都是数值栈，用不同数字代表+-/*），依次遍历字符串，数字则直接入数字栈；运算符比栈顶运算符优先级大则入栈；
否则，从栈顶弹栈，再取数字栈顶的两个栈，进行运算，结果再压入数字栈。为了判断运算是否结束，故在栈的开头结尾
设置优先级最低的标记运算符。当运算符栈仅剩两个标记运算符时，运算结束；数字栈的唯一元素即为结果。

运算符的优先级是用二维数组的0或1判断

关键在于函数void getop(bool &retop,int &retin,int &index)，从字符串中取数字或者运算符，先判断
是否到了字符串尾；再分数字或者运算符处理。bool retop标记操作符/数字，retin返回数值或操作符，index作为字符串下标
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
/**引用就是给变量起别名，相当于使用了指针，对引用的操作就是对原变量的操作，解决了参数传递不改变原值的缺点**/
void getop(bool &retop,int &retin,int &index){
    int temp;
    if(str[index]!=0)///没到字符尾部
    {
        if(str[index]=='x'){
            retop=false;
            printf("请输入x的值：");
            scanf("%d",&retin);
            getchar();///必须把缓冲区的换行符接收，否则影响gets()
            index++;
            return;
        }
            retin=0;
            while(str[index]>='0'&&str[index]<='9'){///是数字，记录数值
                retop=false;
                temp=str[index]-'0';
                retin=retin*10+temp;
                index++;         //不要忘记下标+1
                if(!(str[index]>='0'&&str[index]<='9'))///数字结束，返回
                return;
            }
            if(!(str[index]>='0'&&str[index]<='9'))//记录运算符
            {
                retop=true;//有retop存在所以  retin可以是0,1,2,3
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
            if(str[index]==0)///遍历到字符串尾部
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
    stackop.push(0);///放入标记运算符

    while(true){
    getop(reto,retn,i);///从字符串取元素
    if(reto){                   ///是操作符
        if(stackop.empty()||priority[retn][stackop.top()]==1)///当前运算符优先级大于栈顶运算符
            stackop.push(retn);
        else{
        while(priority[retn][stackop.top()]==0){                       ///当前运算符优先级小于栈顶运算符
            a=stackin.top();
            stackin.pop();
            b=stackin.top();
            stackin.pop();
            c=stackop.top();
            stackop.pop();
            if(c==1)
                temp=b+a;
            if(c==2)
                temp=b-a;                   /*当前的运算符也要放进去！！！*/
            if(c==3)
                temp=b*a;
            if(c==4)
                temp=b/a;
            stackin.push(temp);///运算结果入数字栈
        }
        stackop.push(retn);///当前运算符优先级大于栈顶运算符优先级，则当前运算符入栈。
        }
    }
    else//是数字
    {
        stackin.push((double)retn);//数字入栈

    }

    if(stackop.size()==2&&stackop.top()==0)
        break;



    }
    printf("%.2lf\n",stackin.top());
    memset(str,0,sizeof(str));
    }

    return 0;

}

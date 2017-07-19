/*如何识别数字还是运算符
运算符的优先级用二维数组的0或1判断
数字和运算符之间用空格间隔是为了可以运算两位及其以上的数字
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
    int temp;
    if(str[index]!=NULL)///没到字符尾部
    {
            retin=0;
            while(str[index]>='0'&&str[index]<='9'){//是数字，记录数值
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
            if(str[index]==NULL)///遍历到字符串尾部
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
    getop(reto,retn,i);//从字符串取元素
    if(reto){                   //是操作符
        if(stackop.empty()||priority[retn][stackop.top()]==1)//当前运算符优先级大于栈顶运算符
            stackop.push(retn);
        else{
        while(priority[retn][stackop.top()]==0){                       //当前运算符优先级小于栈顶运算符
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
            stackin.push(temp);
        }
        stackop.push(retn);
        }
    }
    else//是数字
    {
        stackin.push((double)retn);//数字入栈

    }

    if(stackop.size()==2&&stackin.size()==1&&stackop.top()==0)
        break;



    }
    printf("%.2lf\n",stackin.top());
    memset(str,0,sizeof(str));
    }

    return 0;

}

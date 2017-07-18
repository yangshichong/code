#include <stdio.h>
#include<stack>
#include<cstring>
#include <stdlib.h>
using namespace std;

int main()
{
    char input [100] ;
    char output[100];
    stack<int> n;
    int len,i;
    while(scanf("%s",input)!=EOF){
        len=strlen(input);
        for(i=0;i<len;i++){
           if(input[i]=='('){
//                s.push('(');
                output[i]='$';
                n.push(i);
               }
            else if(input[i]==')'){
                if(n.empty()==true)
                    output[i]='?';
                else
                {
                    output[i]=' ';
                    output[n.top()]=' ';
                    n.pop();
                }
            }
            else
            output[i]=' ';
        }
        output[i]='\0';


        printf("%s\n",input);
        printf("%s\n",output);
        while( !n.empty() )
         n.pop();

    }


   return 0;
}

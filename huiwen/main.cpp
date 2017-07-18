#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
    int i;
    char str[50];

    while(gets(str)){

    int len=std::strlen(str);
    //cout<<len;
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
            break;
    }
    if(i==len/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}

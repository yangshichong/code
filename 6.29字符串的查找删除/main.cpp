#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
    string shortstr;
    string a=" ";
    char str1[100];
    string str;
    string result[100];
    int i=0;
    cin>>shortstr;
    for(i=0;i<shortstr.size();i++){
        shortstr[i]=tolower(shortstr[i]);
    }
    int len=shortstr.length();
    while(gets(str1))
    {
        string str=str1,strtemp=str1;
        for(i=0;i<strtemp.size();i++){   //½«ÁÙÊ±×Ö·û´®»»³ÉÐ¡Ð´£¬±ãÓÚÆ¥Åä
        strtemp[i]=tolower(strtemp[i]);
    }


//        cout<<str<<endl;
        while((i=strtemp.find(shortstr))!=string::npos){
            str.erase(i,len);
            strtemp.erase(i,len);
        }
        while((i=str.find(a))!=string::npos){
            str.erase(i,1);
            strtemp.erase(i,1);
        }
       cout<<str<<endl;
    }

    return 0;
}

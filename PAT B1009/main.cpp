//#include <iostream>
#include <cstdio>
//#include<cstring>
//using namespace std;

//int main()
//{
//    char str[90];
////    cin>>str;
////    cout<<str;
//    gets(str);
//    char result[90][90];
//    int len=strlen(str),r=0,h=0;
//    //cout<<len;
//    for(int i=0;i<len;i++){
//        if(str[i]!=' '){
//            result[r][h++]=str[i];
//        }
//        else
//        {
//            result[r][h]='\0';
//            r++;
//            h=0;
//        }
//    }
//    for(int i=r;i>=0;i--){
//        cout <<result[i];
//        if(i>0)
//        cout <<' ';
//    }
//
//    return 0;
//}
int main(){
int num=0;
char ans[90][90];
while(scanf("%S",ans[num])!=EOF){
    num++;
}
for(int i=num-1;i>=0;i--){
    printf("%S",ans[i]);
    if(i>0)
        printf(" ");
}
return 0;
}

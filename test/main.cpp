//#include <iostream>
//#include<stdio.h>
//using namespace std;
//
//int main()
//{
//int a,b;
//char str[100];
////scanf("%d  %s",&a,str);
//scanf("%s",str);
//    cout<<str<< endl;
//    return 0;
//}
#include<stdio.h>
int main(){
	char str[100][100];
	int i=0;
	while(scanf("%s",str[i])!=EOF){
		i++;
		printf("%s",str[i]);



	}
	for(i=i-1;i>=0;i--){
		printf("%s",str[i]);
	}


	return 0;
}

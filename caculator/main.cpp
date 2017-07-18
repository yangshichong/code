#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i=1,n,product=1;
    scanf("%d",&n);
    while(i<=n){
        product*=i;
        i++;
    }
    printf("%d",product);
    return 0;
}

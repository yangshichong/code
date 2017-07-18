/*#include<cstdio>
#include<math.h>
int main(){
	int n,i;
	while(scanf("%d",&n)!=EOF){
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0){
				printf("no\n");
				break;

			}
		}
		if(i>sqrt(n))
			printf("yes\n");
	}
	return 0;

}*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,i,A,B;
    long  sum;
    int devide;
    int str[100];
    while(scanf("%d%lld%lld",&m,&A,&B)!=EOF){
        if(m==0)
            break;
        sum=A+B;
        i=0;
        do{
            str[i++]=sum%m;
            sum=sum/m;
        }while(sum!=0);
                //printf("%s",str);
        for(i=i-1;i>-1;i--){

            printf("%d",str[i]);
        }
        printf("\n");


    }
    return 0;
}

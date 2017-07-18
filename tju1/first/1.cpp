#include<stdio.h>
int main(){
	int n,i,m;
	int str[100];
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++){
			scanf("%d",&str[i]);
		}
		scanf("%d",&m);
	    for(i=0;i<n;i++){
			if(str[i]==m){
			printf("%d\n",i);
			break;
			}
		}
		if(i==n){
			printf("-1\n");

		}


	}

	return 0;

}
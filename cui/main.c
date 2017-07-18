/*#include <stdio.h>
#include <string.h>

char st1[30][30];
char st2[110][110];

int main(void) {
	int n,m;
	int i,j,k;
	char *rslt;
	memset(st1,0,sizeof(st1));
	memset(st2,0,sizeof(st2));
	scanf("%d%d",&n,&m);
	getchar();
	for(i=0;i<n;i++){
		fgets(st1[i],sizeof(st1[i]),stdin);
		st1[i][strlen(st1[i])-1] = '\0';
	}
	for(i=0;i<m;i++){
		fgets(st2[i],sizeof(st2[i]),stdin);
		st2[i][strlen(st2[i])-1] = '\0';
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			while((rslt=strstr(st2[i],st1[j])) != NULL){
				for(k=0;k<strlen(st1[j]);k++){
					rslt[k] = '*';
				}
			}
		}
	}
//	for(i=0;i<n;i++){
//		printf("%d: ",i); puts(st1[i]);
//	}
	for(i=0;i<m;i++){
		printf("%s\n",st2[i]);
	}
	return 0;
}

*/
#include <stdio.h>
#include <string.h>

char st1[30][30];
char st2[110][110];

int main() {
	int n,m;
	int i,j,k;
	char *rslt;
	//memset(st1,0,sizeof(st1));
	//memset(st2,0,sizeof(st2));
	while(~scanf("%d%d",&n,&m)){
        for(i=0;i<n;i++){
		scanf("%s",st1[i]);
	}
        getchar();
	for(i=0;i<m;i++){
        //getchar();
		gets(st2[i]);
        for(j=0;j<n;j++){
			while((rslt=strstr(st2[i],st1[j])) != NULL){
				for(k=0;k<strlen(st1[j]);k++){
					rslt[k] = '*';
				}
			}
		}
	}
//	for(i=0;i<n;i++){
//		printf("%d: ",i); puts(st1[i]);
//	}
	for(i=0;i<m;i++){
		printf("%s\n",st2[i]);
	}
    }
	return 0;
}


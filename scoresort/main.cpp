#include<cstdio>
#include<cstring>
#include<algorithm>

struct student{
	char name [100];
	int age;
	int score;

}stu[1000];
bool cmp(student s1,student s2){
	if(s1.score!=s2.score)
	return s1.score>s2.score;
	else
		return strcmp(s1.name,s2.name)>0;
}
int main(){
	int n;
	while(scanf("%d",n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%s%d%d",stu[i].name,stu[i].age,stu[i].score);

		}
		sort(stu,stu+n,cmp);
		for(int i=0;i<n;i++){
			printf("%s%d%d",stu[i].name,stu[i].age,stu[i].score);

		}

	}
	return 0;
}

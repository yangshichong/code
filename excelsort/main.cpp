#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
using namespace std;

struct Student{
    int ID;
    char name[8];
    int score;
}stu[100000];
bool cmp1(Student s1,Student s2){
        return s1.ID<s2.ID;
}
bool cmp2(Student s1,Student s2){
        return strcmp(s1.name,s2.name)<0;
}
bool cmp3(Student s1,Student s2){
        return s1.score<s2.score;
}
int main()
{
    int n,c,i,num=0;
    char a[6];

    while(scanf("%d%d",&n,&c)!=EOF){
            if(n==0){
//                printf("0\n");
               break;
            }
            num++;
            for(i=0;i<n;i++){
                scanf("%d%s%d",&stu[i].ID,stu[i].name,&stu[i].score);
//                printf("\n%d",strlen(stu[i].ID));
            }
            if(c==1)
            {
                sort(stu,stu+n,cmp1);
            }
            else if(c==2)
            {
                sort(stu,stu+n,cmp2);
            }
            else
            {
                 sort(stu,stu+n,cmp3);
            }
            printf("Case %d:\n",num);

            for(i=0;i<n;i++){
                printf("%06d %s %d\n",stu[i].ID,stu[i].name,stu[i].score);
            }



    }

    return 0;
}

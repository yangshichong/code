/*#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
struct student{
    char name[50];
    int score;
}stu[1000];
bool cmp1(student s1,student s2){
    if(s1.score<s2.score)
        return true;
    else
        return false;
}
bool cmp2(student s1,student s2){
    if(s1.score>s2.score)
        return true;
    else
        return false;
}
int main()
{
    int n,t,i;
    char name[50];
    int score;
    while(scanf("%d%d",&n,&t)!=EOF){
        for(i=0;i<n;i++){
            scanf("%s%d",stu[i].name,&stu[i].score);
//            stu[i].name=name;
//            stu[i].score=score;
        }
        if(t==1)
            sort(stu,stu+n,cmp1);
        else
            sort(stu,stu+n,cmp2;
        //Êä³ö
        for(i=0;i<n;i++){
            printf("%s %d\n",stu[i].name,stu[i].score);
        }
    }

    return 0;
}*/

/***Ê¹ÓÃvector**/

#include <iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
using namespace std;
struct student{
    char name[50];
    int score;
};
bool cmp1(student s1,student s2){  ///ÉýÐò
    if(s1.score<s2.score)
        return true;
    else
        return false;
}
bool cmp2(student s1,student s2){///½µÐò
    if(s1.score>s2.score)
        return true;
    else
        return false;
}
int main()
{
    int n,t,i;
    char name[50];
    int score;
    vector<student> stu;
    student temp;
    while(scanf("%d%d",&n,&t)!=EOF){
            stu.clear();
        for(i=0;i<n;i++){
            scanf("%s%d",temp.name,&temp.score);
            stu.push_back(temp);
//            stu[i].name=name;
//            stu[i].score=score;
        }
        if(t==1)///ÉýÐò
            stable_sort(stu.begin(),stu.end(),cmp1);
        else
            stable_sort(stu.begin(),stu.end(),cmp2);///½µÐò
        //Êä³ö
        for(i=0;i<n;i++){
            printf("%s %d\n",stu[i].name,stu[i].score);
        }
    }

    return 0;
}

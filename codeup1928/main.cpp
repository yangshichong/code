/*#include<stdio.h>
bool isleap(int year){
    return(year%4==0&&year%100!=0||year%400==0);
}
int main(){
    int early,later;
    int year1,year2,mounth1,mounth2,day1,day2,t_m1,t_d1;
    int days;
    int Mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int Mday2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d%d",&early,&later)!=EOF){
            days=0;
            //xxxxxxxx

            if(early>later){
            int a=early;
            later=early;
            early=later;
        }
        year1=early/10000;mounth1=early%10000/100;day1=early%100;
        year2=later/10000;mounth2=later%10000/100;day2=later%100;
        t_m1=mounth1;
        t_d1=day1;



        //算年
        for(int i=year1+1;i<year2;i++){
            if(isleap(i))
                days+=366;
            else
                days+=365;
        }
        //算月
        mounth1--;
        do
        {



        if(day1==Mday[mounth1]){
            day1=0;
            mounth1=++mounth1%12;
        }
        days++;
        day1++;

        }while(!(mounth1+1==mounth2&&day1==day2));

        if(((t_m1=2&&t_d1<=28)||t_m1<2)&&isleap(year1)&&((mounth2=2&&day2>28)||mounth2>2))  //看起点是否包含2.29
            {days++;
            printf("ffff");}
        if(((mounth2=2&&day2>28)||mounth2>2)&&isleap(year2)&&((t_m1=2&&t_d1<=28)||t_m1<2))//看终点是否包含2.29
            days++;
        /*if(mounth1==mounth2&&day1==day2&&)//看终点是否包含2.29
            days++;*/
      /*  printf("%d\n",days+1);


    }
}
*/
#include<cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool isLeap(int year){
    return(year%4==0&&year%100!=0||year%400==0);
}
int main(){
    int time1,y1,m1,d1;
    int time2,y2,m2,d2;
    while(scanf("%d%d",&time1,&time2)!=EOF){
        if(time1>time2){
            int temp=time1;
            time1=time2;
            time2=temp;
        }
        y1=time1/10000,m1=time1%10000/100,d1=time1%100;
        y2=time2/10000,m2=time2%10000/100,d2=time2%100;
        int ans=1;
        while(y1<y2||m1<m2||d1<d2){
            d1++;
            if(d1==month[m1][isLeap(y1)]+1){
                m1++;
                d1=1;
            }
            if(m1==13){
                y1++;
                m1=1;
            }
            ans++;
        }
        printf("%d\n",ans);

    }
    return 0;
}

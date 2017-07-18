#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,z;
    while(scanf("%d",&n)!=EOF){
            for(x=0;x<=100;x++){
                for(y=0;y<=100-x;y++){
                    z=100-x-y;
                    if(x*5*3+y*3*3+z<=3*n)

                        printf("x=%d,y=%d,z=%d\n",x,y,z);
                }
            }

    }
    return 0;
}

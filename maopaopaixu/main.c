/*#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
int array1[]={8,6,4,9,7,1,3,2,5};


int temp=0,i,j;
for(i=0;i<9;i++){
   for(j=0;j<9-i;j++){
    if(array1[j]>array1[j+1]){
     temp=array1[j];
     array1[j]=array1[j+1];
     array1[j+1]=temp;
    }
   }
}

for(i=0;i<9;i++){
    printf("%d ",array1[i]);
}
return 0;
}*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int inx;
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int b[5];
//复制4个元素，b[4]将是随机值
memcpy(b, a, 4 * sizeof(int));
for (inx=0; inx!=5; ++inx) printf("%d\t", b[inx]);
printf("\n");
memcpy(b, a+4, 5 * sizeof(int));
for (inx=0; inx!=5; ++inx) printf("%d\t", b[inx]);
printf("\n");
return 0;
}

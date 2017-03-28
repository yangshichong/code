#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,i,j;
    char c;
    scanf("%d %c",&col,&c);
    if(col%2==1)
        row=col/2+1;
    else
        row=col/2;

    for(i=0;i<col;i++)
    {
      printf("%c",c);
    }
    printf("\n");

    for(i=0;i<row-2;i++)
    {
      printf("%c",c);
      for(j=0;j<col-2;j++)
    {
      printf(" ");
    }
      printf("%c\n",c);
    }


    for(i=0;i<col;i++)
    {
      printf("%c",c);
    }
    printf("\n");



    return 0;
}

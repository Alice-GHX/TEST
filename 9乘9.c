#include <stdio.h>
//#include <math.h>

void main()
{
    int i,j,k;
    for(i=1;i<10;i++)
     {
         for(j=1;j<10;j++)
          {
           k=i*j;
           printf("%d*%d=%d\t",i,j,k);
          }
        printf("\n");
     }
}

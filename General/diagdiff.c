#include <stdio.h>
int main(int argc, char const *argv[]) {
     int ma[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
     int i,j,n,sum1=0,sum2=0;
     n=4;
     for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     {
          if(i==j)
               sum1+=ma[i][j];
          if(i==n-j-1)
               sum2+=ma[i][j];
     }
     printf("%d%d",sum1,sum2);
     return 0;
}

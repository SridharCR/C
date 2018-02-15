#include <stdio.h>
int main(int argc, char const *argv[]) {
     int input[2][2] = {{0,1},{1,1}};
     int ref[2];
     int i,j,min = 44,count=0;
     for(i = 0;i < 2;i++)
     {
          count = 0;
     for(j = 0;j < 2;j++)
          if(input[i][j]==1)
               count++;
     ref[i] = count;
     }
     for(i = 0;i < 2;i++)
     {
          if(min > ref[i])
               min = ref[i];
     }
     printf("%d\n",min );
     return 0;
}

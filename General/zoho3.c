#include <stdio.h>
int main(int argc, char const *argv[]) {
     int i,j,n,x = 0;
     char *string = "WELCOMETOZOHOCORPORATION";
     char array[5][5];
     n = sizeof(array)/sizeof(1);
     for(i = 0;i < 5;i++)
     {
          for(j = 0;j < 4;j++)
          {
               array[i][j] = string[x];
               x++;
          }
     }
     for(i = 0;i < n;i++){
     for(j = 0;j < n;j++)
     printf("%c ", array[i][j] );
     printf("\n" );}
     return 0;
}

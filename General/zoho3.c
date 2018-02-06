#include <stdio.h>
int main(int argc, char const *argv[]) {
     int i,j,n;
     char *string = "WELCOMETOZOHOCORPORATION";
     char array[5][5];
     n = sizeof(array)/sizeof(1);
     for(i = 0;i < n;i++)
     {
          for(j = 0;j < n;j++)
          {
               array[i][j] = string[i];
          }
     }
     return 0;
}

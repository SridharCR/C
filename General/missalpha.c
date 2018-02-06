#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
     int i,j,n;
     char palin[300],nilap[300];
     scanf("%s", palin);
     n = strlen(palin);
     int ref[n];
     for(i=0,j=n-1;i < n && j < n;i++,j--)
     {
          if(palin[i] != palin[j])
          {
               printf("%c\n",palin[i] );
               break;
          }
     }
     return 0;
}

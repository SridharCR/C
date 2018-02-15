#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
     int i,j,n;
     char ip[100];
     scanf("%s", ip);
     n = strlen(ip);
     for(i = 0;i < n;i++)
          for(j = 0;j < i;j++)
               if(ip[i]==ip[j])
               {
                    printf("%c\n",ip[i]);
                    break;
               }
     return 0;
}

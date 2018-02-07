#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
     char ip[300],op[300];
     int n,i,j,flag;
     scanf("%s",ip);
     n = strlen(ip);
     for(i = 0;i < n && ip[i] != '_';i++)  {}
     flag = i-1;
     for(i = 0,j = flag;i <= n ;i++,j--)
     {
          if(i <= flag)
               op[i] = ip[j];
          else
               op[i] = ip[i];
     }
     printf("%s\n",op );
     return 0;
}

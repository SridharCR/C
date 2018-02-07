#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
     char ip[100],op[100],s,f;
     scanf("%s", ip);
     int i,j,n,t,y;
     n = strlen(ip);
     for(i = 0;i < n;i++)
     {
          s = ip[i];
          if(isalpha(s))
               f = s;
          else if(!((isdigit(ip[i+1])) || (isdigit(ip[i-1]))))
          {
               t = s - '0';
               for(y = 0; y < t;y++)
                    printf("%c", f);
          }
          else
          {
               t = (s-'0')*10+ip[i+1]-'0';
               for(y = 0; y < t;y++)
                    printf("%c", f);
               break;
          }
     }
     return 0;
}

#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
     int i,j,n,m;
     char s1[100],s2[100];
     scanf("%s\n", s1);
     scanf("%s",s2 );
     n = strlen(s1);
     m = strlen(s2);
     for(i = 0,j = m;i < n && j >= 0;i++,j--)
     {
          s1[j] == s2[i]
     }
     return 0;
}

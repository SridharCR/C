#include <stdio.h>
int main(int argc, char const *argv[]) {
     int i,j,a;
     char ip[] = "program";
     for(i=0,j=6;i<7 && j>=0;i++,j--)
     {
          if(i<j)
          {
               for(a=0;a<i;a++) printf(" ");
               printf("%c",ip[i]);
               for(a=0;a<j-i-1;a++) printf(" ");
               printf("%c\n",ip[j]);

          }
          if(i==j)
          {
               for(a=0;a<j;a++) printf(" ");
               printf("%c\n",ip[i] );
          }
          if(i>j)
          {
               for(a=0;a<j;a++) printf(" ");
               printf("%c",ip[j]);
               for(a=0;a<i-j-1;a++) printf(" ");
               printf("%c\n",ip[i]);


          }

     }
     return 0;
}

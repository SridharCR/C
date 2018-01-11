#include <stdio.h>
#include <ctype.h>
#include <string.h>
int isKeyword(char buffer[20])
{
     char keywords[7][10] = {"int","char","float","short","double","void","return"};
     int i, flag = 0;

     for(i = 0; i < 7; ++i){
         if(strcmp(keywords[i], buffer) == 0){
            flag = 1;
            break;
         }
     }

     return flag;
}
int main(int argc, char const *argv[]) {
     char operators[] = "+-*/=";
     char paran[] = "{([])}";
     //char func[] = "main";
     FILE *fp;
     char ch,buffer[20];
     int i,j=0;
     printf("Sridhar *************** 15IT46\nLexical Analysis\n");
     fp = fopen("program.c","r");
     while((ch = fgetc(fp)) != EOF){
          for(i = 0; i < 7; ++i){
              if(ch == paran[i])
                  printf("%c is paranthesis\n", ch);
          }
           for(i = 0; i < 6; ++i){
               if(ch == operators[i])
                   printf("%c is operator\n", ch);
           }

           if(isalnum(ch)){
               buffer[j++] = ch;
           }
           else if((ch == ' ' || ch == '\n') && (j != 0)){
                   buffer[j] = '\0';
                   j = 0;

                   if(isKeyword(buffer) == 1)
                       printf("%s is keyword\n", buffer);
                   else
                       printf("%s is identifier\n", buffer);
           }

    }
     fclose(fp);
     return 0;
}

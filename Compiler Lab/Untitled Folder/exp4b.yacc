%{
#include<stdio.h>
%}
%token LETTER DIGIT
%%
variable: LETTER|LETTER rest
;
rest: LETTER rest
|DIGIT rest
|LETTER
|DIGIT
;
%%
main()
{
yyparse();
printf("The string is a valid variable\n");
}
int yyerror(char *s)
{
printf("this is not a valid variable\n");
exit(0);
}

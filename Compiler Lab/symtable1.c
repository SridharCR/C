#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>
#include<malloc.h>
#include<ctype.h>
void main()
{
int i=0,j=0,n,b[10];
char c;
clrscr();
printf("\n Enter the Expression to be inserted into the symbol table");
while((c=getchar())!='\n')
{
b[i]=c;
i++;
}
n=i-1;
i=0;
printf("Given Expression:\n");
while(i<=n)
{
printf("%c",b[i]);
i++;
}
for(j=0;j<=n;j++)
{
c=b[j];
if(isalpha(toascii(c)))
{
printf("\n%c\tidentifier\n",c);
}
}
for(j=0;j<=n;j++)
{
if(b[j]=='+'||b[j]=='-'||b[j]=='*'||b[j]=='=')
{
printf("\n %c Arithmetic operator",b[j]);
}
}
getch();
}


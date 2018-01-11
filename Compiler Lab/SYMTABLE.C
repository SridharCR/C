#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void main()
{
int len,count=0,i;
char *ins,*temp;
clrscr();
ins = malloc(100);
temp = malloc(100);
printf("Enter the Instruction to be inserted into the symbol table :\t");
scanf("%s",&ins);
printf("\n----------SYMBOL TABLE-------------");
printf("\nToken Name\tLexeme");
len = strlen(ins);
while(count<len){
while(isalpha(ins[count]) || ins[count] == "_"){
i=count;
strncat(temp,ins[i],1);
if(ins[i] != "_"){
switch(temp){
case "int":printf("\nint\tDatatype");
			count += i;
			break;
case "float":printf("\nfloat\tDatatype");
			count += i;
			break;
case "char": printf("\nchar\tDatatype");
			count += i;
			break;
}
}else{
if(!isalpha(ins[count+1]) && ins[count+1] != "_"){
printf("\n%s\t identifier",temp);
count += i;
break;
}
}
}
switch(ins[count]){
case "=":printf("\n=\t Assignment Operator");
		count++;
		break;
case "+":printf("\n+\t Arithmetic Addition Operator");
	count++;
	break;
case "-":printf("\n-\t Arithmetic Subtraction Operator");
		count++;
		break;
case "*":printf("\n*\t Arithmetic Multiplication Operator");
		count++;
		break;
case "/":printf("\n/\t Arithmetic Division Operator");
		count++;
		break;
}
}
getch();
}

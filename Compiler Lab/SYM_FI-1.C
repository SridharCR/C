
   #include<stdio.h>
   #include<string.h>
   #include<stdlib.h>
   #include<ctype.h>
  int main(){
   int len,i;
   char input[30],d1,d2,d3,d4;
   printf("Achuthan Babu       ********************    15IT37\n");
   printf("------Symbol Table--------");
   printf("\nInstruction to be entered in the symbol table");
   scanf("%s",&input);
   printf("\nTName\tLexeme");
   len=strlen(input);
   for(i=0;i<len;i++)
   {
   d1=input[i];
	d2=input[i+1];
	d3=input[i+2];
	d4=input[i+3];
	if((d1=='i') && (d2=='n') && (d3=='t') && (d4==' '))
		   {	printf("integer");
		   }
	}
	     for(i=0;i<len;i++){
   if(isalpha(input[i])){
			   printf("\n%c\tidentifier",input[i]);

   }
   else if(isdigit(input[i])){
	printf("\n%c\tconstant",input[i]);
   }
   else{
	switch(input[i]){
	case '+':
		printf("\n%c\tAddition operator",input[i]);
		break;
	case '-':
		printf("\n%c\tSubtraction operator",input[i]);
		break;
	case '*':
		printf("\n%c\tProduct operator",input[i]);
		break;
	case '%':
		printf("\n%c\tModulo operator",input[i]);
		break;
	case '/':
		printf("\n%c\tDivision operator",input[i]);
		break;
	case '(':
		printf("\n%c\tLparanthesis",input[i]);
		break;
	case ')':
		printf("\n%c\tRparenthesis",input[i]);
		break;
	case '=':
		printf("\n%c\tAssignment Operator",input[i]);
		break;
	}
   }
   }
   printf("\n");
  return 0;
   }

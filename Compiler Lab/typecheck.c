#include<stdio.h>
#include<string.h>
void main()
{
char a[10];int i,flag=0;
printf("Enter the string\n");
scanf("%s",a);
for(i=0;i<strlen(a);i++)
{
if((a[i]>='a'||a[i]>='A')&&(a[i]<='z'||a[i]<='Z'))
{
flag=1;
}
else{ flag=0;
break;}
}
if(flag==1)
printf("The given string is Valid\n");
else
printf("Type Error\n");
}

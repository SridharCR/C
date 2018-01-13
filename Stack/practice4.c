/*
Tower of Hanoi without stack
*/
#include<stdio.h>
void hanoitowers(int,char,char,char);
void hanoitowers(int n, char peg1, char peg2, char peg3)
{
if(n==1)
{
printf("\nMove disk 1 from peg %c to peg %c",peg1,peg2);
return;
}
hanoitowers(n-1,peg1,peg3,peg2);
printf("\nMoving disk %d from peg %c to peg %c",n,peg1,peg2);
hanoitowers(n-1,peg3,peg2,peg1);
}
void main( )
{
int n;
printf("Enter the number of disks : ");
scanf("%d",&n);
printf("The Tower of Hanoi involves the moves :\n\n");
hanoitowers(n,'A','C','B');
return 0;
}

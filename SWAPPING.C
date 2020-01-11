#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int n,a,b,c;
printf("Program for swapping :\nEnter your choice:\n1.Swap with a third variable.\n2.Swap without third variable.\n");
scanf("%d",&n);
switch(n){
	case 1:
	printf("\nEnter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	printf("\nThe value of a=%d\tand the value of b=%d\t before swapping.",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nThe value of a=%d\tand the value of b=%d\t after swapping",a,b);
	break;
	case 2:
	printf("\nEnter the value of a:");
	scanf("%d",&a);
	printf("\nEnter the value of b:");
	scanf("%d",&b);
	printf("\nThe value of a=%d\tand the value of b=%d\t before swapping.",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe value of a=%d\tand the value of b=%d\t after swapping",a,b);
	break;
	Default:
	printf("Please enter correct option.");
	}
}
getch();
}

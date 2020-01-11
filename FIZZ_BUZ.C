#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
 int num;
 printf("Enter any number:\n");
 scanf("%d",&num);

	if(num%3==0&&num%5==0)
	{
	printf("Fizz! Buzz!");
	}
	else if(num==3||num%3==0)
	{
	printf("Fizz!");
	}
	else if(num==5||num%5==0)
	{
	printf("Buzz!");
	}
	else
	{
	exit();
	}
}
getch();
}

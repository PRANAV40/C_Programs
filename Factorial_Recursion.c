#include<stdio.h>
#include<conio.h>
int fact();
main()
{
int n;
clrscr();
printf("Enter any number to get its factorial:\n");
scanf("%d",&n);
printf("The factorial of %d is = %d",n,fact(n));
getch();
}
int fact(int n)
	{
	if(n<=1)
	{
	return 1;
	}
	else
	{
	return n*fact(n-1);
	}
	}

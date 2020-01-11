#include<stdio.h>
#include<conio.h>
long int reverse(long int);
int main()
{
int n,rev;
clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	rev=reverse(n);
	printf("\nReverse of number %d is %d. ",n,rev);
getch();
}
long int reverse(long int a)
{
 int r,rev=0;
	while(a!=0)
	{
		r=a%10;
		rev=rev*10+r;
		a/=10;
	}
 return rev;
}

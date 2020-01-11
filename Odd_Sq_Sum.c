/* A program to display the squares of odd numbers between 1 and 25. */

#include<stdio.h>
#include<conio.h>
int osq(int);
int i,n,a,sum;
int main()
{
  clrscr();

	printf("A program to display the squares of odd numbers between 1 and 25.\n");
	osq(sum);
	printf("\nSum of squares:\t%d",sum);
  getch();
}

int osq(int sum)
{
 i=0;

	while(i<=25)
	{
		if(i%2!=0)
		{
			a=i*i;
			sum=a++;
			return sum;

		}
	 printf("\n");
	 i++;
	}
 }

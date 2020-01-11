#include<stdio.h>
#include<conio.h>
int mult();
int a,b;
main()
{
clrscr();
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
printf("\nproduct= %d",mult(b,a-1)+b);
getch();
return 0;
}

int mult(int a,int b)
{
	if(b==1)
	{
		return a;
	}
	else
	{
	 return(mult(b,a-1)+b);
	}
}
#include"stdio.h"
#include"conio.h"
void ptrn1();
void ptrn2();
void ptrn3();
void ptrn4();
void ptrn5();
void ptrn6();
void ptrn7();
void ptrn8();
void ptrn9();
void ptrn10();
main()
{
clrscr();
{
int n;
printf("Enter your choice of pattern between 1 to 10 :\n");
scanf("%d",&n);
switch(n){
	case 1 :
		ptrn1();
		break;
	case 2 :
		ptrn2();
		break;
	case 3 :
		ptrn3();
		break;
	case 4 :
		ptrn4();
		break;
	case 5 :
		ptrn5();
		break;
	case 6 :
		ptrn6();
		break;
	case 7 :
		ptrn7();
		break;
	case 8 :
		ptrn8();
		break;
	case 9 :
		ptrn9();
		break;
	case 10 :
		ptrn10();
		break;
	default :
		printf("Invalid input!");
	}
}
getch();
}

void ptrn1()
{
int i,j;
for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{
	if(i==j)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}

	}
	printf("\t");
	printf("\n");
	}
}
void ptrn2()
{
int i,j,k;

for(i=0;i<5;i++)
	{
	for(j=5;j>1;j--)
	{
		for(k=3;k<5;k++)
		{
		printf("*\n ");
		}
		printf("\n");
	}
	}
}
void ptrn3()
{
int i,j;
for(i=1;i<=25;i++)
	{
	for(j=1;j<=25;j++)
	{
	if(i-j==2||j-i==2||i==j)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}

	}
	printf("\t$");
	printf("\n#");
	}
}
void ptrn4()
{
int i,j,k;
for(i=1;i<=5;i++)
{
	for(j=1;j<i;j++)
	{
	printf("*");
	}
	printf("\n");
}
}

void ptrn5()
{
int i,j,k;
for(i=6;i>1;i--)
{
	for(j=8;j>i;j--)
	{
	printf("%d",i);
	}
	printf("\n");
}
}
void ptrn6()
{
int i,j,k;
for(i=1;i<=5;i++)
{
	for(j=5;j>i;j--)
	{
	printf("*");
	}
	printf("\n");
}
}
void ptrn7()
{
int i,j,k;
	for(i=6;i>0;i--)
	{
	for(j=1;j<6;j++)
	{
	printf(" ");
	for(k=6;k>j;k--)
	{
	printf("* ");
	}
	printf("\n");
	} }
}
void ptrn8()
{
int i,j,k;
	for(i=6;i>0;i--)
	{
	for(j=1;j<6;j++)
	{
	printf(" ");
	for(k=6;k>i;k--)
	{
	printf("* ");
	}
	printf("\n");
	}
	}
}
void ptrn9()
{
int i,j,k;
	for(i=6;i>0;i--)
	{
	for(j=1;j<i;j++)
	{
	printf(" ");
	for(k=6;k>j;k--)
	{
	printf("* ");
	}
	printf("\n");
	}
	}
}
void ptrn10()

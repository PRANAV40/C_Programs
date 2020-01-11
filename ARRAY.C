#include"stdio.h"
#include"conio.h"
void name();
void num();

main()
{
clrscr();
{
printf("\t\tMarksheet for Internal Exams\n");
name();
num();
return 0;
getch();
}
}

void name()
{
char nam[10];
	printf("Enter your name:\n");
	scanf("%s",&nam);
	printf("\n\nWelcome %s !",nam);
getch();
}
void num()
{
int n[4];
	printf("\n\nEnter your marks of C programming in both the internals:\n");
	scanf("%2d%2d",&n[0],&n[1]);
	printf("\nEnter your marks of Operating System in both the the internals:\n");
	scanf("%2d%2d",&n[2],&n[3]);
printf("\nThe marks obtained in your internals are:\n\t\t\tI\tII\nC programming\t\t%d\t%d\nOperating System\t%d\t%d",n[0],n[1],n[2],n[3]);
getch();
}
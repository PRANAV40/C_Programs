#include<stdio.h>
#include<conio.h>
int main()
{
 int a=5;
 int *pa,*ppa;
 pa=&a;
 ppa=&pa;
 clrscr();
	printf("\nvalue of a = %d and address of a = %u.",a,&a);
	printf("\nvalue of pa = %u and address of pa = %u.",pa,&pa);
	printf("\nValue of ppa = %u and address of ppa = %u.",ppa,&ppa);
	printf("\nValue of *pa = %d and address of *pa = %u.",*pa,&*pa);
	printf("\nValue of *ppa = %u and address of *ppa = %u.",*ppa,&ppa);

 getch();
}

#include<stdio.h>
#include<conio.h>
void sw();
int *p,*q,temp,a,b;
main()
{
clrscr();
printf("Enter the value of a:\n");
scanf("%d",&a);
printf("\nEnter the value of b:\n");
scanf("%d",&b);
printf("\nValue of a before swapping: %d\nvalue of b before swapping: %d\n ",a,b);
sw(&a,&b);
printf("\nValue of a after swapping: %d\nvalue of b after swapping: %d\n ",a,b);
getch();
}
void sw(int *p,int*q)
{
 temp=*p;
 *p=*q;
 *q=temp;
}

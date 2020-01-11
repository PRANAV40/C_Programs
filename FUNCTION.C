
#include<stdio.h>
#include<conio.h>
int add();
int sub();
float div();
int mul();
float mod();

main()
{
clrscr();
{
int x,y,n;
printf("\nEnter the value of a: ");
scanf("%d",&x);
printf("\nEnter the value of b: ");
scanf("%d",&y);
printf("\nChoose from the given options:\n1.Addition\n2.Substraction\n3.Multiplication\n4.Quotient\n5.Remainder.");
scanf("%d",&n);
switch(n){
	case 1: add();
	break;
	case 2: sub();
	break;
	case 3: mul();
	break;
	case 4: div();
	break;
	case 5: mod();
	break;
	default:
	printf("Invalid Input!");
return(0);
}
getch();
}
int add(){
	int a;
	 a=x+y;
	 printf("\nThe sum of a and b = %d.",a);
	 return (a);
	 }
int sub(){
	 int b;
	 b=x-y;
	 printf("\nThe Difference between a and b = %d",b);
	 return(b);
}
float div(){
	 float c;
	 c=a/b;
	 printf("The Quotient of a and b = %f.",c);
	 return(c);
}
int mul(){
	  int d;
	  d=a*b;
	  printf("The Product of a and b is = %d.",d);
	  return(d);
	  }
float mod(){
	float e;
	e=a%b;
	printf("The Remainder of a/b = %f.",e);
	return(e);
	}
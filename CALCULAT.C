#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int a,b,c,d,e,f;
printf("Enter two numbers for mathematical calculation :\n");
scanf("%d%d",&a,&b);
printf("Choose from the option for \n1.addition\n2.substraction\n3.multiplication\n");
scanf("%d",&c);
	switch(c){
	case 1 :
	d=a+b;
	printf("Sum = %d",d);
	break;
	case 2 :
	if(a>b){
	e=a-b;
	printf("Difference = %d",e);
	}
	else{
	e=b-a;
	printf("Difference = %d",e);
	}
	break;
	case 3 :
	f=a*b;
	printf("product of two numbers is: %d",f);
	break;
	default :
	printf("Please enter a valid choice");
	}
	}
	getch();
	}


#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int d,y;
printf("Enter the no. of day to get the name of week :\n");
scanf("%d",&d);

	if(d>=0&&d<7)
	{
	switch(d){
	case 1 :
	{
	printf("Sunday");
	}
	break;
	case 2 :
	{
	printf("Monday");
	}
	break;
	case 3 :
	{
	printf("Tuesday");
	}
	break;
	case 4 :
	{
	printf("wednesday");
	}
	break;
	case 5 :
	{
	printf("Thursday");
	}
	break;
	case 6 :
	{
	printf("Friday");
	}
	break;
	case 7 :
	{
	printf("Saturday");
	}
	break;
	default:
	printf("please enter the no. of weekday from 1.");
	}
	}
		else if(d>=7)
		{
		y=d%7;
		switch(y){
		case 1 :
		printf("Sunday");
		break;
		case 2 :
		printf("Monday");
		break;
		case 3 :
		printf("Tuesday");
		break;
		case 4 :
		printf("Wednesday");
		break;
		case 5 :
		printf("Thursday");
		break;
		case 6 :
		printf("Friday");
		break;
		case 7 :
		printf("Saturday");
		default :
		printf("Saturday");
		}
		}
getch();
}}
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
char day;
printf("Enter the name of weekday to know the week number as follows:\nsunday : S\nmonday : m\ntuesday: T\nwednesday: w\nthursday: t\nfriday: f\nsaturday : s ");
scanf("%c",&day);
	switch(day)
	{
	case 'S' :printf("1");
	break;
	case 'm' :printf("2");
	break;
	case 'T' :printf("3");
	break;
	case 'w' :printf("4");
	break;
	case 't' :printf("5");
	break;
	case 'f' :printf("6");
	break;
	case 's' :printf("7");
	break;
	default :printf("invalid input!");
	}

}
getch();
}
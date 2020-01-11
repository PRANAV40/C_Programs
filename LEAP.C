#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
{
int year;
printf("enter any year to check whether it is leap or not.");
scanf("%d",&year);
if(year%4==0){
printf("%d is a leap year",year);
}
else{
printf("%d is not a leap year",year);
}
}
getch();
}
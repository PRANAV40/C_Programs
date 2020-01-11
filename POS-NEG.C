/* A program to take any number from user and display only negative number.
      written by Aniket */
#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
{
int a;
printf("Enter any number : \t");
scanf("%d",&a);
if(a<0){
printf("you entered a negative number which is\t%d",a);
}
else if(a==0){
printf("oops!\tyou entered 0",a);
}
else{
printf("oops!\tyou entered a positive no.");
}
}
getch();
}
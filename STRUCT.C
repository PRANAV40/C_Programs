#include<stdio.h>
#include<conio.h>
struct db{
       char name[10];
       int roll;
       int c;
       int os;
       }s1;
int main()
{
clrscr();
	printf("Enter the Name of the student:\n");
	gets(s1.name);
	printf("\nRoll No.: ");
	scanf("%d",&s1.roll);
	printf("\nMarks in C: ");
	scanf("%d",&s1.c);
	printf("\nMarks in OS: ");
	scanf("%d",&s1.os);
	printf("Hello %s !\nYour Marks in C: %d\nYour Marks in OS: %d",s1.c,s1.os);
getch();
}
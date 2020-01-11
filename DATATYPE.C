#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
char a;
printf("enter any number,character or any special character :\n");
scanf("%c",&a);
if(a<='Z'&&a>='A'||a<='z'&&a>='a'){
printf("This is an Alphabet");
}
else if(a>=0&&a<=10000){
printf("This is a number");
}
else{
printf("This is a character");
}
}
getch();
}
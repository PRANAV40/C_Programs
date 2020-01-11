#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int phy,chem,eng,hin,math,total;
float percentage;
char *name;
printf("Enter Your Name : ");
gets(name);
printf("Enter your marks of physics:\n");
scanf("%d",&phy);
printf("Enter your marks of Chemistry:\n");
scanf("%d",&chem);
printf("Enter your marks of Maths:\n");
scanf("%d",&math);
printf("Enter your marks of English:\n");
scanf("%d",&eng);
printf("Enter your marks of Hindi:\n");
scanf("%d",&hin);

total=eng+hin+phy+chem+math;

percentage=(float)total/5;
printf("Hello %s !\n",name);
printf("your total marks is %d and your percentage is %f%\n",total,percentage);
if(percentage>=75){
printf("Congratulations! Your grade is A\n Keep up the good work\n");
}
else if(percentage<75&&percentage>=50){
printf("Congratulations! your grade is B\n you are working hard but try to improve.\n");
}
else{
printf("your grade is C\n Work hard!\n");
}
getch();
}
}

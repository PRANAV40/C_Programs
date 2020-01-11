#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
{
int n,opwd,npwd,rpwd,sam,ram;
long smob,rmob;

printf("Welcome to the world of mobile banking.\nChoose from the options given below :\n1.Balance Enguiry\n2.send money\n3.Request money\n4.Change Password\n0.Exit\n");
scanf("%d",&n);
clrscr();
switch(n){
case 1 :
printf("Your current account balance is Rs.5,657\n");
break;
case 2 :
printf("Enter the mobile number of the reciever to whom you want to send money\n");
scanf("%ld",&smob);
clrscr();
printf("Enter the amount you want to send\n");
scanf("%d",&sam);
clrscr();
printf("Congratulations! Rs. %d has been sent to %ld",sam,smob);
break;
case 3:
printf("Enter the Mobile number of the person from whom you want to request money :\n");
scanf("%ld",&rmob);
clrscr();
printf("Enter the amount:\n");
scanf("%d",&ram);
clrscr();
printf("your request has been successfully initiated.\n");
break;
case 4:
printf("Enter your old pin:\n");
scanf("%d",&opwd);
clrscr();
printf("Enter the new pin:\n");
scanf("%d",&npwd);
clrscr();
printf("Re enter your new pin:\n");
scanf("%d",&rpwd);
clrscr();
if(npwd==rpwd){
printf("Your pin has been successfully changed");
}
else{
printf("sorry!\tpin doesn't match");
}
break;
case 0:
printf("Thank you for banking with us. Your session has expired.");
exit(1);
break;
default:
printf("Invalid input.\n");
}
}
getch();
}

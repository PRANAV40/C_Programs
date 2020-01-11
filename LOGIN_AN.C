#include<stdio.h>
#include<conio.h>
void log();
void sign();
void screen();
int a,n,u,v,pwd;
char usr1[10],usr2[10],usr3[10],usr4[4];
main()
{
clrscr();

printf("\t\t\tplease Login to Enter:\n\n1.login\n2.sign up\n");
scanf("%d",&a);
	switch(a)
		{
		case 1: log();
			break;
		case 2: sign();
			break;
		default:
		printf("Invalid Input!\nPlease try again...");
		}
return 0;
getch();
}

void log()
{
clrscr();
printf("\nPlease enter your login credentials\n\n");
printf("\t\tUser name : ");
scanf("%s",usr2);
printf("\n\n\t\tPassword :  ");
scanf("%d",&pwd);
u=strcmp(usr1,usr2);
if(u==0&&pwd==n)
		{
		printf("\n\nYou are succesfully logged in.");
		clrscr();
		screen();
		}
else
	{
	printf("\n\nUser name or Password is incorrect!\n\ntry again...");
	sign();
	}
}

void sign()
{
printf("\n\n\t\t\tCreate your account");
printf("\n\nUser name (must be less than 10 characters)\n\t\t\t:");
scanf("%s",usr1);
printf("\n\nSelect your Password (upto 8 characters, numbers only)\n\t\t\t:");
scanf("%d",&n);
printf("\n\nYour account has been succesfully created!");
log();
getch();
}
void screen()
{
clrscr();
printf("\t\t\tWelcome %s !",usr1);
printf("\n\nwelcome to the world of Computer science.");
}





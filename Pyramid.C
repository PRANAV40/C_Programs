#include<stdio.h>
#include<conio.h>
main()
{
int i,j,k=0;
clrscr();
	for(i=1;i<=10;i++)
		{
		for(j=1;j<=i;j++);
		k++;
		if(i==0||i==2||i==4||i==7)
		{
			printf("\n");
		}
		 if(i==1)
		 {
			printf("   ");
		 }
		 if(i==2)
		 {
			printf("  ");
		 }
		 if(i==4)
		 {
			printf(" ");
		 }
		 if(i==7)
		 {
			printf("");
		 }
			printf("%d",k);

		printf(" ");
		}
getch();
return 0;
}
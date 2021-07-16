#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[20],s2[20],res='y';
clrscr();
	while(res=='Y' || res=='y')
	{
	printf("enter string s1 :---");
	gets(s1);
	printf("\nyour entered string is %s\n",s1);
	printf("\n--------------------------\n");
	printf("\nDo you want to continue ? Y:N\n");
	res=getch();
	}
getch();
}
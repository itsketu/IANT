#include<stdio.h>
#include<conio.h>
void main()
{
  char s1[50],s2[50],res='y';
clrscr();
	while(res=='Y' || res=='y')
	{
	 printf("enter first string :-");
	 gets(s1);
	 printf("enter second string :-");
	 gets(s2);

	 printf("---------------------\n");
	 printf("first string = %s\n",s1);
	 printf("second string = %s\n",s2);

	 printf("---------------------\n");
	 printf("The occurance of second string in first string is = %s\n", strstr(s1,s2));

	 printf("\nDo you want to continue ? Y:N");
	 res=getch();
	}
getch();
}
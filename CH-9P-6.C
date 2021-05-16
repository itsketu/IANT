#include<stdio.h>
#include<conio.h>
void main()
{
	char ch,s[20],res='y';
clrscr();
	while(res=='Y' || res=='y')
	{
	printf("Enter string :-");
	gets(s);
	printf("Enter character :-");
	scanf("%c",&ch);

	printf("-----------------------------\n");
	printf("Entered string is %s\n",s);
	printf("Entered character is %c\n",ch);

	printf("-----------------------------\n");
	printf("The occurance of character in string is = %s\n", strchr(s,ch));
	printf("The strset function is = %s\n", strset(s,ch));

	printf("------------------------------\n");
	printf("Do you want to continue ? Y:N");
	res=getch();
	}

getch();
}

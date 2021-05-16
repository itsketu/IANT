#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[30],s2[30],res='y';
clrscr();
	while(res=='Y' || res=='y')
	{
	printf("enter first string :--");
	gets(s1);
	printf("enter second string :--");
	gets(s2);

	printf("--------------------------------\n");
	printf("\nThe entered first string is = %s\n",s1);
	printf("The entered second string is = %s\n",s2);

	printf("---------------------------------\n");
	printf("The length of first string is = %d\nThe length of second string is = %d\n", strlen(s1),strlen(s2));

	printf("---------------------------------\n");
	printf("The lower case of first string is = %s\nThe lower case of second string is = %s\n", strlwr(s1),strlwr(s2));

	printf("---------------------------------\n");
	printf("The upper case of first string is = %s\nThe upper case of second string is = %s\n", strupr(s1),strupr(s2));

	printf("---------------------------------\n");
	printf("The first concatination of the string is = %s\nThe second concatination of string is = %s\n", strcat(s1,s2),strcat(s2,s1));

	printf("----------------------------------\n");
	printf("The copy of First string to second is = %s\nThe copy of seocnd string to first is = %s\n", strcpy(s1,s2),strcpy(s2,s1));

	printf("----------------------------------\n");
	printf("The reverse of fisrt string is = %s\nThe reverse of second string is = %s\n", strrev(s1),strrev(s2));

	printf("==================================\n");
	printf("Do you want to continue ? Y:N");
	flushall();
	res=getch();
	}
getch();
}
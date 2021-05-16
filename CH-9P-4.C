#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[20],str2[20];

clrscr();
	printf("enter the string 1 :--");
	gets(str1);
	printf("enter the string 2 :--");
	gets(str2);

	printf("string 1 is = %s\n",str1);
	printf("string 2 is = %s\n",str2);


	if(str1<str2)
	{
	  printf("str1 is less than str2");
	}
	else if(str1>str2)
	{
	  printf("str2 is less than str1");
	}
	else
	{
	  printf("str1 is equal to str2");
	}
getch();

}
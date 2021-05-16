#include<stdio.h>
#include<conio.h>
void main()
{
	char s1[5]={'a','e','i','o','u'};
	char s2[20]="hello there";
	int i;
clrscr();
printf("first string s1 = %s\n",s1);
printf("size of string s1 = %d\n",sizeof(s1));
printf("address of string s1 = %u\n",s1);

for(i=0;i<5;i++)
{
printf("char %d of string = %c and its address = %u\n",i,s1[i],&s1[i]);
}
printf("\n----------------------------------\n");
printf("second string s2 = %s\n",s2);
printf("size of string s2 = %d\n",sizeof(s2));
printf("address of string s2 = %u\n",s2);
getch();
}
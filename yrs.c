#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter your days:");
	scanf("%d",&a);
	b=a/365;
	a=a%365;
	printf("\nNumber of years are %d",b);
	c=a/7;
	a=a%7;
	printf("\nNumbers of weeks are:%d",c);
	int d=a;
	printf("\nThe number of days are :%d",d);
	return 0;
 

}
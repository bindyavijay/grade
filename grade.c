#include<stdio.h>
#include<stdlib.h>
int main()
{
int a;
printf("enter your marks");
scanf("%d",&a);
if(a>=60  && a<100)
{
	printf("**** GRADE A ****");
}
else if(a<60 && a>35)
{
	printf("****GRADE B****");
}
else if(a<35)
{
	printf("better luck next time");
}
else 
{
	printf("invalid \n try again  :-)");
}
return 0;
}

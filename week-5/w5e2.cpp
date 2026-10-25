#include<stdio.h>
int main()
{
   int units;
   float bill;
   printf("enter how many units:");
   scanf("%d",&units);
   	if(units<=100)
   	{
   		bill = units * 1.5;
	   }
	else if(units>=101 && units<=200)
	{
		bill = units*2.5;
	}
	else if(units>=201 && units<=500)
	{
		bill = units*4.0;
	}
	else if(units>500)
	{
		bill = units*6.0;
	}
	printf("Total bill amount:%.2f\n",bill);
	
}

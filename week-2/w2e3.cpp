#include<stdio.h>
int main()
{
	float amount,rate,time,sp;
	printf("enter amount:");
	scanf("%f",&amount);
	printf("enter rate:");
	scanf("%f",&rate);
	printf("enter time(in days):");
	scanf("%f",&time);
	sp =( (amount * rate * time)/(100 * 365));
	printf("Simple interest: %.2f\n",sp);
	printf("Total amount: %.2f",amount + sp);
}


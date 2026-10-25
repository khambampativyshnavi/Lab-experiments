#include<stdio.h>
int main()
{
	int sum,a,b,c;
	float avg;
	printf("enter any three values:");
	scanf("%d %d %d",&a,&b,&c);
	sum = a + b + c;
	avg = (float)sum / 3;
	printf("Sum: %d\n",sum);
	printf("Average: %.2f",avg);
	
}

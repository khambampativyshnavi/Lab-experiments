#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5;
	float tot,avg;
	printf("enter your five sub marks:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
	tot = s1+s2+s3+s4+s5;
	avg = tot/5;
	printf("Total: %.2f\n",tot);
	printf("Average: %.2f",avg);
}

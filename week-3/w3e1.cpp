#include<stdio.h>
#include<math.h>
int main()
{
   int num;
   printf("enter a value:")	;
   scanf("%d",&num);
   float result = sqrt(num);
   printf("squareroot of %d is %.2f",num,result);
}

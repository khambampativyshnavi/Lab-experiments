#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x;
	printf("enter a,b,c values:");
	scanf("%f %f %f",&a,&b,&c);
	x = (b*b)-(4*a*c);
	if(x>=0)
	{
		printf("Roots are %.2f and %.2f\n",(-b+sqrt(x))/(2*a),(-b-sqrt(x))/(2*a));
   }   
   else if(x<0)
   {
   	printf("Imaginary roots\n");
   }
}

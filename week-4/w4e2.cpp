#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter any three numbers:");
   scanf("%d %d %d",&a,&b,&c);
   if((a>b && a>c)?printf("%d is big",a):((b>c)?printf("%d is big",b):printf("%d is big",c)));
}

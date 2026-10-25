#include<stdio.h>
int main()
{
	int A,B,C,D,E,F,G,i,J;
	printf("enter any nine values:");
	scanf("%d %d %d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&G,&i,&J);
	printf("A+B*C+(D*E)+F*G: %d\n",A+B*C+(D*E)+F*G);
	printf("A/B*C-B+A*D/3: %d\n",A/B*C-B+A*D/3);
	printf("A++ +B-- -A: %d\n",A++ +B-- -A);
	printf("J = %d\n",(i++)+(++i));
}

#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("enter any two numbers:");
	scanf("%d %d",&a,&b);
	printf("enter(1 for add,2 for sub,3 for mul, 4 for div):");
	scanf("%d",&choice);
	if(choice == 1 || choice == 2 || choice == 3 || choice == 4 )
	{
	switch(choice)
	{
		case 1:
			printf("Sum: %d\n",a+b);
			break;
			case 2:
				printf("Subtraction: %d\n",a-b);
				break;
				case 3:
					printf("Multiplication: %d\n",a*b);
					break;
					case 4:
						if(b == 0)
						{
							printf("Division by zero is not possible\n");
						}
						else 
						{
							printf("Division: %.2f\n",(float)a/b);
						}
						break;
	}
		
	}
	else
	{
		printf("Invalid option\n");
	}
	
	}

#include<stdio.h>
int main()
{
   int choice;
    float celsius, fahrenheit;
    printf("Fahrenheit to Celsius = 1\n");
    printf("Celsius to Fahrenheit = 2\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if(choice == 1) {
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
        }

    else if(choice == 2) {
            printf("\nEnter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);
        }

    else {
	
            printf("\nInvalid choice");
         }
	
}

#include<stdio.h>
#include<math.h>
int main(){
    float amount, rate, time;
    float totalamount,ci;
    printf("Enter the principal  amount: ");
    scanf("%f", &amount);
    printf("Enter the interest rate: ");
    scanf("%f", &rate);
    printf("Enter the time period (in days): ");
    scanf("%f", &time);
    totalamount = amount * pow((1 + rate / 100), time/365);
    ci = totalamount - amount;
    printf("Compound interest: %.2f\n",ci);
    printf("Total amount: %.2f",totalamount);
}

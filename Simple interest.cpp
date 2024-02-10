//Program to calculate simple interest
#include<stdio.h>

int main(){
int principle, rate, time;
float interest;
printf("Enter the principle amount, rate, &time:\n ");
scanf("%d, &principle, &rate, &time");

interest=principle*rate/100*time;
printf("The interest is %0.2f", interest);

return 0;
}
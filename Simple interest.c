//Program to calculate simple interest
#include<stdio.h>

int main(){
int principle, rate, time;
float interest;
//prompt the user to enter the principle rate and time
printf("Enter the principle amount, rate, &time:\n ");
scanf("%d, &principle, &rate, &time");

interest=principle*rate/100*time;// calculating the interest using the formula

//displaying interest on screen
printf("The interest is %0.2f", interest);

return 0;
}
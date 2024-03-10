// Calculating compound interest
#include <stdio.h>

int main() {
    double principal_amount, rate, time_duration, amount, compound_interest;
    
// Prompt the user to enter the principle amount rate and time duration
 printf("Enter the principal amount:\n ");
    scanf("%lf",&principal_amount);
    printf("Enter the rate of interest:\n ");
    scanf("%lf",&rate);
    printf("Enter the time duration:\n ");
    scanf("%lf",&time_duration);
    
 // calculating the amount using the formula   
    amount = principal_amount*(1+rate/100)*time_duration;
    
 // calculating the compound interest 
    compound_interest = amount - principal_amount;
    
// displaying the compound interest 
    printf(" The compound interest is: %lf",compound_interest);
    
    return 0;
}
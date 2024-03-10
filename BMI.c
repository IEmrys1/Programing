/*C program that calculates the Body Mass Index (BMI) based on my input for weight and height
Date Feb 12 2024
By Emrys*/
#include <stdio.h>

int main() {
    float weight, height, bmi;
    
// Prompt the user to enter the weight height 
    printf("Enter your weight (in kilograms):\n ");
    scanf("%f", &weight);

    printf("Enter your height (in meters):\n ");
    scanf("%f", &height);
    
// Caculating the bmi
    bmi = weight / (height * height);
    
//display the bmi
    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
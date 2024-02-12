/*C program that calculates the Body Mass Index (BMI) based on my input for weight and height
Date Feb 12 2024
By Emrys*/
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight (in kilograms):\n ");
    scanf("%f", &weight);

    printf("Enter your height (in meters):\n ");
    scanf("%f", &height);

    // Calculate BMI using the formula
    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
/* program to enter an integer number
Date 11 mar 2024
Compiled by: Enrys*/
#include <stdio.h>//corrocted the alignment of preprocesser directive

// corrected the main function signature to int main () and started the main body function with{
int main(){
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);// correct format specifier %d and added missing parentheses)
    
    if(number < 100) {
        printf("Your number is smaller than 100\n");
    } else {
        printf("Your number contains more than two digits\n");//adding proper parentheses () and newline characters \n
      }
    
    return 0;// added return 0;
}

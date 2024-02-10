/*Author: Emrys
Date: 3/2/2023
Description
Write a program to add two numbers */
#include<stdio.h> 
int main()
{
int a,b,c;
printf("Please enter any two numbers; \n");
scanf("%d %d\n", &a, &b);

c=a+b;

printf("The addition of two number is: %d",c);
return 0;
}
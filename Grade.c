//program to find grade
#include <stdio.h>
int main(){
int maths, eng, kisw, average;

// Prompt the user to enter book details
printf("Enter the marks for math, eng and kisw:\n ");
scanf("%d %d %d", &maths, &eng, &kisw);

//calculating the average marks
average=(maths+eng+kisw)/3;

// determining grades
if(average>=70 && average<=100)
{
printf("Grade A");
}
else if(average>=60 && average<=69)
{
printf("Grade B");
}else if(average>=50 && average<=59)
{
printf("Grade C");

}
else if(average>=40 && average<=49)
{
printf("Grade D");

}
else if(average>=0&& average<=39)
{
printf("Grade F");
}
else ("Invalid Marks.");

return 0;
}
/*
 C Program to Find the Volume and Surface Area of cylinder
 Date Feb 12 2024
 By Emrys
 */
#include <stdio.h>
 
int main()
{
 
    float radius, height;
    float surface_area, volume;
 
 // prompt the user to enter the radius and height
    printf("Enter  value for  radius and height of a cylinder : \n");
    scanf("%f%f", &radius, &height);
    
// calculating the surface area and volume using the folmura    
    surface_area = 2 * (22 / 7) * radius * (radius + height);
    volume = (22 / 7) * radius * radius * height;
    
// display details of surface area and volume    
    printf("Surface area of cylinder is: %.2f\n", surface_area);
    printf("Volume of cylinder is : %.2f\n", volume);
    
    return 0;
}
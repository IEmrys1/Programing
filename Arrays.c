/*Author: Emrys
Date: 10/3/2023
Description
Write a program to declare and initialize an array */
#include <stdio.h>

int main() {
// Declare and initialize the array
int a[3][3][2] = {
     { {17, 20}, {18, 42}, {33, 67} },
     { {87, 66}, {45, 10}, {13, 21} },
     { {34, 75}, {35, 12}, {11, 19} }
};

int i, j, k;
// Print the array
printf("Array a[3][3][2]:\n");

for (i = 0; i < 3; i++) {
for (j = 0; j < 3; j++) {
for (k = 0; k < 2; k++) {
printf("a[%d][%d][%d] = %d\n", i, j, k, a[i][j][k]);
 }
 }
 }

 return 0;
}
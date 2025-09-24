// Surface area of a cylinder

/* 
name:            Owuor Zephania Ulare
Reg no:          PA106/G/29218/25
description:     A C program to calculate the surface area of a cylinder
*/

#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846
// Function to calculate the volume of a cylinder

int main(){
    double radius, height, surface_area;

    // Prompt user for radius
    printf("Enter the radius of the cylinder in cm: ");
    scanf("%lf", &radius);

    // Prompt user for height
    printf("Enter the height of the cylinder in cm: ");
    scanf("%lf", &height);

    // Calculate surface area
    surface_area = 2 * M_PI * radius * (radius + height);

    // Display the result
    printf("The surface area of the cylinder in cm^2 is: %.2lf\n", surface_area);
    return 0;
}
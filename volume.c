// Volume of a cylinder

/* 
name:            Owuor Zephania Ulare
Reg no:          PA106/G/29218/25
description:     A C program to calculate the volume of a cylinder
*/


#include <math.h>
#include <stdio.h>
#define M_PI 3.14159265358979323846


int main(){
    double radius, height, volume;

    printf("Enter the radius of the cylinder in cm: ");
    scanf("%lf", &radius);

    printf("Enter the hieght of the cylinder in cm: ");
    scanf("%lf", &height);

    volume = M_PI * radius * radius * height;

    printf("The volume of the cylinder in cm^3 is: %2lf\n", volume);
    return 0;


}
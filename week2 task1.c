//Programs to find the volume and surface area of a cylinder

/*
Description: Program to find the volume and surface area of a cylinder
Name: Patience Ann Wairimu
Date: 24/05/2026
Reg no: BDSA-03-0017/2026
Version 1
*/

#include <stdio.h>
//Volume of a cylinder

int main () {
	
	int height,radius;
	float volume;
	float surface_area;
	
	printf("Enter the height: ");
	scanf("%d",&radius);
	
	printf("Enter the radious: ");
	scanf("%d",&radius);
	
	 volume = 3.142*radius*radius*height;
	surface_area =2*3.142*radius*radius + 2*3.142*radius*height;
	
	printf("The volume of the cylinder is %.2f\n", volume);
	printf("The surface area of the cylinder is %.2f\n", surface_area);
	
	return 0;
}
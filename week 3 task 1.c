//A program that checks if a student is eligible for final exams
/*
Name:Patience Njuguna 
Reg no:BDSA-03-0017/2026
Version 1
*/

#include <stdio.h>

int main(){
	
	//declare variablesfor attendance and average marks
	float attendance;
	float average_marks;
	
	//get input from user
	printf("Enter attendance percentage: ");
	scanf("%f", &attendance);
	
	printf("Enter average marks: ");
	scanf("%f", &average_marks);
	
	//check eligibility conditions
	if (attendance >= 75 && average_marks >= 40){
		//Both conditions met - students is eligible
		printf("Eligible for final exams. \n");
		}
	 else {
		//one or both conditions not met
		printf("Not eligible. \n");
	}
	return 0;
}
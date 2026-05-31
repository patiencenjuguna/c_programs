//program showing calculation of waterbill based on units consumed

#include <stdio.h>

int main(){

//Declare variables for units and total bills
float units;
float total_bill;

//prompt user to enter water units consumed
 printf("Enter water units consumed: ");
scanf("%f", &units);

//calculate bill using if-else if-else statements
if(units <= 30){
	//0 to 30 units - charged at 20 kes per unit
	total_bill = units * 20;
	
} else if (units <= 60){
	//31 to 60 units - charged at 25 kes per unit
	total_bill = units * 25;
	
} else {
	//above 60 units - charged at 30 kes per unit
	total_bill = units * 30;
}
//display total bill with two decimal places
printf("Total water bill: %2f kes\n", total_bill);

return 0;
}
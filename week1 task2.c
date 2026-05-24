//program that prompts the users to input data

/*
Description: Program that prompts the user to enter height,bank balance and phone number
Name: Patience Ann Wairimu
Date: 24/05/2026
Reg No: BDSA-03-0017/2026
Version 1
*/

#include<stdio.h>

int main (){
	
	 float height;
	 double bank_balance;
	 int phone_number;
	 
	  printf("Enter your height:\n");
	  scanf("%height",&height);
	  
	  printf("Enter your bank balance:\n");
	  scanf("%bank_balance",& bank_balance);
	  
	  printf("Enter your phone number:\n");
	  scanf("%phone_number",&phone_number);
	  
	  printf("The height is %height \n",height);
	  printf("your bank balance is %bank_balance \n",bank_balance);
	  printf("your phone number is %phone_number \n",phone_number);
	  
	  return 0;
}
	  
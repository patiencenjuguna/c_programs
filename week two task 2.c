//program that shows one is fit to get a loan

/*
Description: program that shows one is fit to get a loan form a bank
Name: Patience Ann Wairimu Njuguna
Date: 24/05/2026
Reg no: BDSA-03-0017/2026
Version 1
*/

int main() {
	int age;
	float income;
	
    printf("Enter your age: ");
	scanf("%d",age);
	
	printf("Enter your income: ");
	scanf("%d",income);
	
	if(age>=21 && income>=21000) {
		printf("congratulations, you qualify to get a loan. \n");
	}
	else{
		printf("unfortunately,we are unable to offer you a loan at this time. \n");
	}
	return 0;
}
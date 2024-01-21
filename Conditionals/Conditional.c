#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	const int PACKAGECOST = 99;
	int totalCost;
	double discount;
	double reducedCost;
	int printedDiscount;

	int numberOfPackages;
	printf("Please input the amount of packages.\n");
	scanf("%d", &numberOfPackages);
	if (numberOfPackages < 10) {
		discount = 1;
		 
	}
	else if (numberOfPackages < 20)
	{//apply 20% discount
		discount = 0.80;


	}
	else if (numberOfPackages < 50) {
		//apply a 30 percent discount
		discount = 0.70;
	}
	else if (numberOfPackages < 100) {
		//aplly a 40 percent discount
		discount = 0.60;
	}
	else if (numberOfPackages >= 100){
		discount = 0.50;

	}
	totalCost = (numberOfPackages * PACKAGECOST) * discount;
	printedDiscount = 100 - (int) (discount * 100);
	printf("The total cost of %d packages is $%d\n", numberOfPackages, totalCost);
	printf("you recieved %d percent discount on this order.",printedDiscount);
	return 0;

}
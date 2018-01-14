#include <stdio.h>


int main () {

	int codig, quant;
	float total; 

	scanf("%d %d", &codig, &quant);

	if (codig == 1){
		total = 4.00 * quant;
	}
	else if(codig == 2){
		total = 4.50 * quant;
	}
	else if(codig == 3){
		total = 5.00 *  quant;
	}
	else if(codig == 4){
		total = 2.00 * quant;
	}
	else if (codig == 5){
		total = 1.50 * quant;
	}

	printf("Total: R$ %.2f\n", total);

	return 0;
}
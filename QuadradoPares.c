#include <stdio.h>


int main (){

	int quant, i;
	long long int dobro;

	scanf("%d", &quant);

	for(i = 1; i <= quant; i++){
		if(i % 2 == 0){
			dobro = i;
			dobro *= dobro;

			printf("%d^2 = %lld\n", i, dobro);
		}
	}

	return 0;
}
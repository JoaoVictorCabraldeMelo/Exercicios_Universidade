#include <stdio.h>



int main () {
	long long int quant, nro;
	int i;
	scanf("%lld", &quant);

	for(i = 0; i < quant; i++){

		scanf("%lld", &nro);

		if(nro % 2 == 0 && nro != 0){
			printf("EVEN ");
		}
		else if (nro != 0){
			printf("ODD ");
		}


		if(nro > 0){
			printf("POSITIVE\n");
		}
		else if (nro != 0){
			printf("NEGATIVE\n");
		}

		if(nro == 0){
			printf("NULL\n");
		} 


	}
}
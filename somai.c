#include <stdio.h>


int main () {

	int quant, maior, menor, soma = 0;

	int x, y, i, j;



	scanf("%d", &quant);

	for(i = 0; i < quant; i++){

		soma = 0;

		scanf("%d %d", &x, &y);

		if(y > x){
			maior = y;
			menor = x;
		}
		else {
			maior = x;
			menor = y;
		}

		for(j = menor + 1; j < maior; j++){
			if(j % 2 != 0){
				soma += j;
			}
		}

		printf("%d\n", soma);

	}

	return 0;

}
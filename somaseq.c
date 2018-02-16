#include <stdio.h>


int main () {

	int m , n, i;
	int maior, menor, soma = 0;

	scanf("%d %d", &m, &n);

	while(m > 0 && n > 0) {

		soma = 0;

		if(m < n){
			maior = n;
			menor = m;
		}
		else {
			maior=m;
			menor = n;
		}

		for(i = menor; i <= maior; i++){
			printf("%d ", i);
			soma += i;
		}

		printf("Sum=%d\n",soma);

		scanf("%d %d", &m, &n);
	}


	return 0;
}
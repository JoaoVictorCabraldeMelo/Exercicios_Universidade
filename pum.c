#include <stdio.h>


int main () {

	int inicio = 1, fim = 3, vezes, cont = 0, i;

	scanf("%d", &vezes);

	while(cont < vezes){

		for(i = inicio;i <= fim; i++){
			printf("%d ", i);
		}

		printf("PUM\n");

		cont++;
		inicio += 4;
		fim += 4;

	}

	return 0;


}
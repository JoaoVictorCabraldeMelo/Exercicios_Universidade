#include <stdio.h>


int main () {

	int cont = 0;
	double nota, soma = 0, media;

	while(cont < 2){
		scanf("%lf", &nota);
		if(nota < 0 || nota > 10){
			printf("nota invalida\n");
		}
		else {
			soma += nota;
			cont++;
		}

	}

	media = soma / 2.0;

	printf("media = %.2lf\n", media);

	return 0;
}
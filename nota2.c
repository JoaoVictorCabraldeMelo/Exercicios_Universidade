#include <stdio.h>

void nota(){

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

}

int main (){

	int continua;

	do {

		nota();
		do {

			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &continua);

		}while(continua != 1 && continua != 2);

	}while(continua != 2 && continua == 1);

	return 0;
}


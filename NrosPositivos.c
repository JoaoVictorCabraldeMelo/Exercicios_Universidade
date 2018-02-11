#include <stdio.h>


int main () {

	double nro, soma, media;
	int positivo = 0, i;


	for(i = 0; i < 6; i++){

		scanf("%lf", &nro);

		if(nro > 0){

			soma += nro;

			positivo++;
		}

	}

	media = soma / positivo;

	printf("%d valores positivos\n", positivo);
	printf("%.1lf\n", media);


	return 0;
}
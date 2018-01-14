#include <stdio.h>


int main () {

	double N1, N2, N3, N4, NE;
	double Media;

	scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

	 Media = ((N1 * 2.0) + (N2 * 3.0) + (N3 * 4.0) + (N4 * 1.0)) / 10.0;

	if (Media >= 7.0) {
		printf("Media: %.1lf\n", Media);
		printf("Aluno aprovado.\n");
	}
	else if (Media < 5.0){
		printf("Media: %.1lf\n", Media);
		printf("Aluno reprovado.\n");
	}
	else {
		printf("Media: %.1lf\n", Media);
		printf("Aluno em exame.\n");
		scanf("%lf", &NE);
		printf("Nota do exame: %.1lf\n", NE);
		Media = (Media + NE) / 2.0;
		if (Media >= 5.0){
			printf("Aluno aprovado.\n");
		}
		else {
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n", Media);
	}

	
	return 0;
}
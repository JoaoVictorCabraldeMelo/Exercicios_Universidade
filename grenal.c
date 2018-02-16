#include  <stdio.h>



int main () {

	int gremio, inter, continua;
	int intervenceu = 0,  gremiovenceu = 0, empate = 0, jogo = 0;

	do{

	scanf("%d %d", &inter, &gremio);


	if(inter > gremio){
		intervenceu++;
	}
	else if(inter < gremio){
		gremiovenceu++;
	}
	else {
		empate++;
	}

	jogo++;


	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &continua);
	
	}while(continua == 1);

	printf("%d grenais\n", jogo);
	printf("Inter:%d\n", intervenceu);
	printf("Gremio:%d\n", gremiovenceu);
	printf("Empates:%d\n", empate);

	if(intervenceu == gremiovenceu){
		printf("Nao houve vencedor\n");
	}
	else if(intervenceu > gremiovenceu){
		printf("Inter venceu mais\n");
	}
	else {
		printf("Gremio venceu mais\n");
	}



	return 0;
}
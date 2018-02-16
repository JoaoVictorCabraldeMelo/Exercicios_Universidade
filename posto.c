#include <stdio.h>


int main () {

	int combustivel, alcool = 0, gasolina = 0, diesel = 0;

	do{

		do{

			scanf("%d", &combustivel);

		}while(combustivel > 4 && combustivel < 1);

		if(combustivel == 1){
			alcool++;
		}
		else if(combustivel == 2){
			gasolina++;
		}
		else if(combustivel == 3){
			diesel++;
		}

	}while(combustivel != 4);


	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0;
}
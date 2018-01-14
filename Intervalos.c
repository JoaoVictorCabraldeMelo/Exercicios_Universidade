#include <stdio.h>

int main () {

	double nume_do_inter;

	scanf("%lf", &nume_do_inter);
	
		if (nume_do_inter < 0 || nume_do_inter > 100){
				printf("Fora de intervalo\n");
		}
			
	else if (nume_do_inter <= 25 && nume_do_inter >= 0){
			printf("Intervalo [0,25]\n");
	}
	else if(nume_do_inter > 25 && nume_do_inter <= 50){
				printf("Intervalo (25,50]\n");
	}
	else if(nume_do_inter > 50 && nume_do_inter <= 75){
				printf("Intervalo (50,75]\n");			
	}
	else if(nume_do_inter > 75 && nume_do_inter <= 100){
				printf("Intervalo (75,100]\n");
	}
	


	return 0;
}
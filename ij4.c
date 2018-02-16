#include <stdio.h>


int main () {

	float i, j;
	int k, entrou = 0;


	for(i = 0; i <= 2; i += 0.2){
		k = 0;
		j = 1 + (0.2 * entrou);
		while(k < 3){

			if(i == 0 || i == 1 || i == 2){
				printf("I=%.0f ", i);
				printf("J=%.0f\n", j);
			}
			else {
				printf("I=%.1f ", i);
				printf("J=%.1f\n", j);
			}

			k++;
			j++;
			
		}

		entrou++;

	} 

	for(k = 0; k < 3; k++){
		printf("I=2 ");
		printf("J=%d\n", k + 3);
	}

	return 0;
} 
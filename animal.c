#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	char animal[20] = "vertebrado";
	char animal2[20] = "invertebrado";
	char ave[20] = "ave";
	char mamifero[20] = "mamifero";
	char carnivoro[20] = "carnivoro";
	char onivoro[20] = "onivoro";
	char herbivoro[20] = "herbivoro";
	char hematofago[20] = "hematofago";
	char inseto[20] = "inseto";
	char anelideo[20] = "anelideo";

	char escolha[20];

	scanf("%s", escolha);

	if (strcmp(escolha,animal) == 0){

		scanf("%s", escolha);

		if(strcmp(escolha,ave) == 0){

			scanf("%s", escolha);

			if(strcmp(escolha,carnivoro) == 0){

				printf("aguia\n");

			}
			else if(strcmp(escolha,onivoro) == 0){

				printf("pomba\n");
			}
		}

		else if(strcmp(escolha,mamifero) == 0){

			scanf("%s", escolha);

			if(strcmp(escolha,onivoro) == 0){

				printf("homem\n");
			}
			else if(strcmp(escolha,herbivoro) == 0){

				printf("vaca\n");
			}
		}
	}

	else if(strcmp(animal2,escolha) == 0){

		scanf("%s", escolha);

		if (strcmp(escolha,inseto) == 0){

			scanf("%s", escolha);

			if(strcmp(escolha,hematofago) == 0){

				printf("pulga\n");
			}

			else if (strcmp(escolha,herbivoro) == 0){

				printf("lagarta\n");
			}
		}

		else if (strcmp(escolha,anelideo) == 0){

			scanf("%s", escolha);

			if(strcmp(escolha,hematofago) == 0){

				printf("sanguessuga\n");
			}

			else if(strcmp(escolha,onivoro) == 0){

				printf("minhoca\n");
			}
		}


	}
	return 0;
}
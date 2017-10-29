#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>


int main (){

	int contador = 0;

	pilha* Pilha = aloca_pilha();



	Menu(Pilha, contador);

	

	


	release(Pilha);



	
		
	return 0;
}

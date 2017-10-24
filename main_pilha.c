#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>


int main (){

	pilha* Pilha = aloca_pilha();

	push(1, Pilha);
	push(2, Pilha);
	push(3, Pilha);
	push(4, Pilha);
	push(5, Pilha);

	Print(Pilha);

	pop(Pilha);
	

	Empty(Pilha);

	release(Pilha);


	
		
	return 0;
}
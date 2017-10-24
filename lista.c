#include "lista.h"
#include <stdlib.h>
#include <stdio.h>


/*----------------------------------------------------------------*/
void Erase(N_lista* lista){
	n_pessoa* ptr = lista->primeiro;

	if(!Empty(lista)){

			while( ptr != NULL){
					lista->primeiro = lista->primeiro->proximo;

					free(ptr);

					ptr = lista->primeiro;
			}

	}

	free(lista);
}
/*----------------------------------------------------------------*/

void Print(N_lista* lista){
	n_pessoa* ptr = lista->primeiro;

		if(Empty(lista)){

			printf("LISTA ESTA VAZIA\n");
			return;
		}

		while( ptr != NULL){
			printf(" %d -> ", ptr->dado);

			ptr = ptr->proximo;
		}

		printf("NULL\n");

}

/*----------------------------------------------------------------*/

int Empty(N_lista* lista){

	return(lista->primeiro == NULL && lista->ultimo == NULL);

}

/*----------------------------------------------------------------*/

void Put_Begin(int Valor, N_lista* lista){

	n_pessoa* pessoa = aloca_pessoa(Valor);

	pessoa->proximo = lista->primeiro;
	lista->primeiro = pessoa;

	if(lista->ultimo == NULL){

			lista->ultimo = lista->primeiro;

	}
}

/*----------------------------------------------------------------*/

void Put_End(int valor, N_lista* lista){
	n_pessoa* pessoa = aloca_pessoa(valor);

	if(Empty(lista)){

		lista->primeiro = pessoa;

	}
	else {

		lista->ultimo->proximo = pessoa;
	}

	lista->ultimo = pessoa;

}

/*----------------------------------------------------------------*/

void Put(int position, int valor,N_lista* lista){
	if(position <= 0){

		Put_Begin(valor,lista);

	}
	else{
		n_pessoa* atual = lista->primeiro;
		int i;

		for(i = 0; i < position - 1 && atual != NULL;i++){

			atual = atual->proximo;
		}

		if(atual == NULL || atual == lista->ultimo){

			Put_End(valor,lista);

		}
		else {
			n_pessoa* pessoa = aloca_pessoa(valor);

			pessoa->proximo = atual->proximo;
			atual->proximo = pessoa;
		}
	}
}

/*----------------------------------------------------------------*/

n_pessoa* aloca_pessoa(int dado){
	n_pessoa* ptr = (n_pessoa *) malloc(sizeof(n_pessoa));

	ptr->dado = dado;
	ptr->proximo = NULL;

	return ptr;
}

/*----------------------------------------------------------------*/

N_lista* aloca_lista(){

	N_lista* ptr = (N_lista *) malloc(sizeof(N_lista));

	ptr->primeiro = NULL;
	ptr->ultimo = NULL;


}

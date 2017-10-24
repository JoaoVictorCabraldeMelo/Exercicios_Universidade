#include "pilha.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



pilha* aloca_pilha() {

	pilha* top = (pilha *) malloc(sizeof(pilha));/*aloca topo*/

	top->topo = NULL;

	return(top);

}

void push(float dado, pilha* top){

		item*  data = (item *) malloc(sizeof(item));

		data->dado = dado;/*recebe o dado*/

		data->prox = top->topo;/*coloca NULL no ultimo elemento*/

		top->topo = data;/*atualiza o elemento*/


}

float pop(pilha* top){

	item* desempilha = top->topo;/*desempilha recebe o prox*/

	float dado = desempilha->dado;/*o valor a ser retornado*/

	top->topo = desempilha->prox;/*atualiza o topo*/

	/*free(desempilha);/*da o free*/

	return(dado);

}


void release(pilha* top){

	item *aux, *q = top->topo;

	while(q != NULL){

		aux = q->prox;/*aux e apenas uma variavel auxiliar que conserva o dado que esta em q*/ 

		free(q);

		q = aux;
	}

	free(aux);

}


int Empty(pilha* top){

	if(top->topo == NULL){

		printf("---------------------- A PILHA ESTA VAZIA----------------------\n");

		return EMPTY;

	}

	else{

		printf("---------------------- A PILHA NAO ESTA VAZIA----------------------\n");

		return 0;

	}

}

void Print(pilha* top){

	int i = 1;

	while(top->topo != NULL){

		printf("%d. -> %1.f\n", i, pop(top));
		i++;

	}

}
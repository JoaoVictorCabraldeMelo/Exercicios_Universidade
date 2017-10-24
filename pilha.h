#ifndef __PILHA_H__
#define __PILHA_H__

/*esta biblioteca e para uma pilha com lista */

typedef struct ptr {

	float dado;

	struct ptr* prox;

}item;/*vai ser os itens da pilha */


typedef struct {

	item* topo;/*aponta para o topo*/

}pilha;

#define EMPTY -1;/*macro pra vazio*/

pilha* aloca_pilha();

void push(float dado, pilha* top);

float pop(pilha* top);

void release(pilha* top);

int Empty(pilha* top);

void Print(pilha* top);



#endif

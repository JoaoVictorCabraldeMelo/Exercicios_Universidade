#ifndef __PILHA_H__
#define __PILHA_H__

/*esta biblioteca e para uma pilha com lista */

typedef struct ptr {

	char dado;

	struct ptr* prox;

}item;/*vai ser os itens da pilha */


typedef struct {

	item* topo;/*aponta para o topo*/

}pilha;






pilha* aloca_pilha();

void push(char dado, pilha* top);

char pop(pilha* top);

void release(pilha* top);

int Empty(pilha* top);

void Print(pilha* top);

int verify(pilha* top,char* expressao, int CONTADOR_MENU);

void Menu(pilha* top, int CONTADOR_MENU);

void desempilha_tudo(pilha* top);

char inf_pos(pilha* top, int CONTADOR_MENU);

void MODO_CALCULADORA(pilha* top);






#endif

#ifndef __LISTA_H__
#define __LISTA_H__




typedef struct pessoa {

		int dado;
		struct pessoa* proximo;

}n_pessoa;//estrutura para o tipo n_pessoa onde pessoa* é um ponteiro pro proximo;


typedef struct{

		n_pessoa* primeiro;
		n_pessoa* ultimo;

}N_lista;//temos um ponteiro pro primeiro e ultimo;

n_pessoa* aloca_pessoa(int dado);
N_lista* aloca_lista();

int Empty(N_lista* lista);

void Put_Begin(int Valor, N_lista* lista);

void Put_End(int Valor, N_lista* lista);

void Put(int position, int Valor, N_lista* lista);

void Print(N_lista* lista);
void Erase(N_lista* lista);



#endif
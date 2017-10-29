#include "pilha.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>



pilha* aloca_pilha() {

	pilha* top = (pilha *) malloc(sizeof(pilha));/*aloca topo*/

	top->topo = NULL;

	return(top);

}

void push(char dado, pilha* top){

		item*  data = (item *) malloc(sizeof(item));

		data->dado = dado;/*recebe o dado*/

		data->prox = top->topo;/*coloca NULL no ultimo elemento*/

		top->topo = data;/*atualiza o elemento*/


}

char pop(pilha* top){

	if(Empty != 0){

		item* desempilha = top->topo;/*desempilha recebe o prox*/

		char dado = desempilha->dado;/*o valor a ser retornado*/

		top->topo = desempilha->prox;/*atualiza o topo*/

		free(desempilha);/*da o free*/

		return(dado);
	}
	else {

		printf("+++++++++++++++++++++ ERRO VOCE ESTA QUERENDO DESEMPILHAR SEM PILHA +++++++++++++++++++++\n");

	}

}


void release(pilha* top){

	item *aux, *q = top->topo;

	while(q != NULL ){

		aux = q->prox;/*aux e apenas uma variavel auxiliar que conserva o dado que esta em q*/ 

		free(q);

		q = aux;
	}

	free(aux);

	free(top);


}


int Empty(pilha* top){

	if(top->topo == NULL){

		printf("---------------------- A PILHA ESTA VAZIA----------------------\n");

		return -1;

	}

	else{

		printf("---------------------- A PILHA NAO ESTA VAZIA----------------------\n");

		return 0;

	}

}

void Print(pilha* top){

	int i = 1;

	while(top->topo != NULL || Empty(top) == 0){


		printf("%d. -> %c\n", i, pop(top));
		i++;

	}

}

int verify(pilha* top,char* expressao, int CONTADOR_MENU){

	int i = 0, contador_aberto = 0, contador_fechado = 0;


	while(expressao[i] != '\0'){/*no final de uma string a \0 usei isso como condição de saida do loop*/

		switch (expressao[i]){/*o switch testa se um dele e parenteses aberto ou fechado , se for ele e contado*/

			case '(':

				contador_aberto++;

				break;


			case ')':

				contador_fechado++;

				break;
		}

		i++;

	}

	if(contador_fechado == contador_aberto){/*se o contadores forem iguais então a expressao e valida */

		printf("------------------------EXPRESSAO VALIDA------------------------\n");


		return 0;

	}
	else {

		printf("-----------------------FALTA PARANTESES-------------------------\n");

		printf("-----------------------EXPRESSAO INVALIDA-----------------------\n");

		CONTADOR_MENU++;

		Menu(top, CONTADOR_MENU);


		return -1;

	}

}


void Menu(pilha* top, int CONTADOR_MENU){

int escolha;

char resposta[10];

	if(CONTADOR_MENU > 0){

		printf("Espere 3s\n");

		sleep(3);

	}

	if(CONTADOR_MENU > 0){

		printf("Deseja Continuar?(use 'Sim' ou 'Nao' como resposta)\n");

		scanf(" %s", resposta);

		if(strcmp(resposta,"Nao") == 0){

			exit(-1);
		}

		else if(strcmp(resposta,"Sim") != 0 && strcmp(resposta,"Nao") != 0){

			printf("Essa resposta nao é valida, digite 'Sim' ou 'Nao' \n");

			CONTADOR_MENU++;

			Menu(top,CONTADOR_MENU);

		}

	}

	system("clear");

	printf("+++++++++++++++++++++BEM-VINDO A CALCULADORA POLONESA+++++++++++++++++++++\n");

	printf("Se deseja usar o MODO CALCULADORA digite 1.\nSe deseja usar o modo INFIXA->POSFIXA digite 2.\n");

	scanf("%d", &escolha);

	if(escolha == 1){

		MODO_CALCULADORA(top);

	}
	else if(escolha == 2){

		inf_pos(top,CONTADOR_MENU);

	}


	CONTADOR_MENU++;

	desempilha_tudo(top);

	Menu(top,CONTADOR_MENU);
}


void desempilha_tudo(pilha* top){

	while(top->topo != NULL || Empty(top) == 0){


		 pop(top);

	}

}



char inf_pos(pilha* Pilha, int CONTADOR_MENU){

	char expressao[10000];

	float resultado;

	printf("Escreva a expressao entre ():\n");

	printf("EX:(2+3);\n");

	scanf(" %[^\n]s", expressao);/*vai escanear expressão até a pessoa da ENTER */


	if(verify(Pilha,expressao,CONTADOR_MENU) == 0){

			int tam = strlen(expressao);

			char* pos = (char *) malloc(sizeof(char) * tam);

			push(expressao[0],Pilha); /*'(' na pilha*/

			int j = 0, i;

			/*-----------------motando expressao posfixa-----------------*/

			for(i = 1;expressao[i] != '\0';i++){

				switch (expressao[i]){

					char valor;

					case '(':

						push(expressao[i],Pilha);

						break;

					case ')':
						
						valor = pop(Pilha);

							while(valor != '('){

								pos[j++] = valor;

								valor = pop(Pilha);

							}

						break;
					
					case '+':
					case '-':

						valor = pop(Pilha);

							while(valor != '(') {

								pos[j++] = valor;

								valor = pop(Pilha);

							}

							push(valor,Pilha);

							push(expressao[i],Pilha);

							break;

					case '*':
					case '/':

						valor = pop(Pilha);


							while(valor != '(' && valor != '+' && valor != '-'){

									pos[j++] = valor;

									valor = pop(Pilha);
							}

							push(valor,Pilha);

							push(expressao[i],Pilha);

							break;

					default: 

					pos[j++] = expressao[i];


					
				}

			}
					
						pos[j] = '\0';
					
					/*---------------------calculo da expressao posfixa-------------------- */
					
						int k = 0;	
							
	desempilha_tudo(Pilha);/*inicia uma pilha vazia*/

		float a, b;

		while(pos[k] != '\0'){

			switch(pos[k]){

				case '+':


						resultado = ((float)pop(Pilha) - 48) + ((float)pop(Pilha) - 48);

						printf("resultado -> %1.f\n", resultado);

						push(resultado + 48,Pilha);

						break;

				case '-':

					a = ((float)pop(Pilha) - 48);

					b = ((float)pop(Pilha) - 48);

						resultado = b - a;

						printf("resultado -> %1.f\n", resultado);

						push(resultado + 48,Pilha);

						break;

				case '*':

						resultado = ((float)pop(Pilha) - 48) * ((float)pop(Pilha) - 48);

						printf("resultado -> %1.f\n", resultado);

						push(resultado + 48,Pilha);

						break;

				case '/':

					a = ((float)pop(Pilha) - 48);

					b = ((float)pop(Pilha) - 48);


						resultado = b / a;

						printf("resultado -> %1.f\n", resultado);

						push(resultado + 48,Pilha);

						break;

				default:

				push(pos[k],Pilha);

			}

			k++;


		}

	printf("A expressao posfixa e %s \n", pos);

	Print(Pilha);


	
	free(pos);

	}

}

void MODO_CALCULADORA (pilha* top){

	 char valor[3], numero;

	 float soma = 0, diferenca, mult = 1, quoci;

	 float SOMA = 0, MULT = 1, SUB, ELEMENTO;

	 int copias, i , j = 0;


	 printf("REGRAS DO MODO CALCULADORA:\nOs numeros de entrada so podem ser entre 1 e 9 dado pelo os problemas do char e quando executar qualquer comando DIGITE 0 para sair do MODO_CALCULADORA\n");
	 /*Os comandos sao 0 = quit\n + - * '/' faz operaçoes aritmeticas com os dois ultimos operandos\n'!operacao desejada' faz essa operacao ate que a pilha esta vazia"*/
	do{

			printf("%d -> ", j);

			scanf(" %s", valor);

			 		if(valor[0] ==  '+' && strcmp(valor,"+!") != 0){

			 			for(i = 0; i < 2;i++){
			 		
			 			soma = (((float) pop(top)) - 48) + soma ;

			 			}



			 			push(soma + 48, top);

			 			printf("%d -> %1.f\n", j, soma);
				 	}


			 		

			 		else if(valor[0] == '-' && strcmp(valor,"-!") != 0){

			 			if(Empty(top) != -1){

			 			diferenca = (((float) pop(top)) - 48) - (((float) pop(top)) - 48);

			 			 	push(diferenca + 48, top);

			 			 	printf("%d -> %1.f\n", j, (float) diferenca);

			 			}

			 		}
				 			

			 		else if(valor[0] == '*' && strcmp(valor,"*!") != 0){

			 			  for(i = 0; i < 2;i++){

							mult = (((float) pop(top)) - 48) * (float)mult;	 			 	

			 			 }

			 			 push(mult + 48, top);

			 			 printf("%d -> %1.f\n", j, (float)mult);

			 		} 

			 			

			 		else if(valor[0] == '/'){

				 			if(Empty(top) != -1){

				 			 quoci = (((float)pop(top)) - 48) / (((float)pop(top)) - 48);

				 			}

				 			push(quoci + 48,top);

				 			printf("%d -> %1.f\n", j, (float)quoci);

			 		}


			 		else if(strcmp(valor,"+!") == 0){

			 				while(Empty(top) != -1){

			 				 SOMA = (float)SOMA + (((float)pop(top)) - 48);

			 				}

			 			push(SOMA + 48, top);

			 			printf("%d -> %1.f\n", j, (float)SOMA);

			 		}

			 		else if(strcmp(valor,"*!") == 0){

			 				while(Empty(top) != -1){

			 				 MULT = (float)MULT * (((float)pop(top)) - 48);

			 				}

			 			push(MULT + 48, top);

			 			printf("%d -> %1.f\n", j, (float) MULT);

			 		}


			 		else if (strcmp(valor,"-!") == 0){

			 				if(Empty(top) != -1){

			 					SUB = (((float)pop(top)) - 48) - (((float)pop(top)) - 48);

			 				}

			 				while(Empty(top) != -1){

			 					 SUB = (float) SUB - (((float)pop(top)) - 48);
			 				}

			 				push(SUB + 48, top);

			 				printf("%d -> %1.f\n", j, (float)SUB);
			 		}

			 		else if (valor[0] == 'c'){
			 			
			 			if(Empty(top) != -1){

			 				 copias = (((int)pop(top)) - 48);

			 				 ELEMENTO = (((float)pop(top)) - 48);

			 				for(i = 0;i < copias;i++){

			 					push(ELEMENTO + 48,top);

			 					printf("%d -> %1.f\n", j, ELEMENTO);

			 				}

			 			}
			 		}

			 		else {

			 			 numero =  valor[0];

			 			push(numero,top);

			 		}

			 	j++;

	}while(((int)numero - 48) != 0);

}

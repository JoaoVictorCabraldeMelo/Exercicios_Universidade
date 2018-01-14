#include <stdio.h>


int main () {
	int colunas, linhas;
	int i, j;



	do{
		scanf("%d", &linhas);
	}while(linhas <= 0);

	do{
		scanf("%d", &colunas);
	}while(colunas <= 0);

	int mat[linhas][colunas];


	for(i = 0; i < linhas; i++){
		for(j = 0; j < colunas; j++){
			scanf("%d", &mat[i][j]);
		}
	}


	for(j = 0; j < colunas; j++){
		for(i = 0; i < linhas; i++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}


	return 0;
}
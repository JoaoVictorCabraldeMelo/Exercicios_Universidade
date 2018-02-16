#include <stdio.h>



int main () {

	int x , y, i;
	int menor, maior, soma = 0;

	scanf("%d %d", &x, &y);

	if(x > y){
		menor = y;
		maior = x;

	}
	else {
		menor = x;
		maior = y;
	}

	for(i=menor+1; i < maior;i++){
		if(i % 2 != 0){
			soma += i;
		}
	}

	if(x == y){
		soma = 0;
	}

	printf("%d\n", soma);

	return 0;
}
#include <stdio.h>



int main () {


	int x, y, maior, menor;
	int soma = 0, i;


	scanf("%d", &x);
	scanf("%d", &y);

	if(x > y){
		maior = x;
		menor = y;
	}
	else {
		maior = y;
		menor = x;
	}


	for(i = menor; i <= maior;i++){
		if(i % 13 != 0){
			soma += i;
		}
	}

	printf("%d\n", soma);


	return 0;
}
#include <stdio.h>


int main () {

	int i, nro, par = 0;

	for(i = 0; i < 5;i++){
		scanf("%d", &nro);

		if(nro % 2 == 0){

			par++;

		}
	}

	printf("%d valores pares\n", par);

	return 0;
}
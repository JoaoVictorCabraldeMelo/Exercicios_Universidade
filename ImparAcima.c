#include <stdio.h>


int main () {

	int x, i, impar = 0;

	scanf("%d", &x);

	for(i = x; impar < 6; i++){
		if(i % 2 != 0){
			printf("%d\n", i);
			impar++;
		}
	}

	return 0;
}
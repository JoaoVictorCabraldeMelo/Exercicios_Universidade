#include <stdio.h>


int main (){

	int N, i , mult;


	scanf("%d", &N);


	for(i = 1; i <= 10;i++){
		mult = i * N;

		printf("%d x %d = %d\n", i , N, mult);
	}

	return 0;
}
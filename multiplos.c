#include <stdio.h>


int main () {
	int A, B, Aux;

	scanf("%d %d", &A, &B);

	if(A > B){
		Aux = B;
		B = A;
		A = Aux;

	}

	if (B % A == 0){
		printf("Sao Multiplos\n");
	}
	else{
		printf("Nao sao Multiplos\n");
	}


	return 0;
}
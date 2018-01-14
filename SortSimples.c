#include <stdio.h>

int main () {
	int A, B, C;
	int Menor,Maior,Medio;

	scanf("%d %d %d", &A, &B, &C);

	if(A < B && A < C){
		Menor = A;
	}
	else if(B < A && B < C){
		Menor = B;
	}
	else /*if(C < A && C < B)*/{
		Menor = C;
	}
		if(A > B && A > C){
			Maior = A;
		}
		else if(B > A && B > C){
			Maior = B;
		}
		else {
			Maior = C;
		}
			if (Maior > A && Menor < A){
				Medio = A;
			}
			else if(Maior > B && Menor < B){
				Medio = B;
			}
			else {
				Medio = C;
			}
			printf("%d\n%d\n%d\n",Menor ,Medio ,Maior);
			printf("\n");
			printf("%d\n%d\n%d\n",A ,B ,C);


	return 0;
}
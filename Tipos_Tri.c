#include <stdio.h>
#include <math.h>

int main () {

	double A,B,C;
	int i, trocou;
	double vet[3], aux;

	

	for(i = 0; i < 3; i++){
			
		scanf("%lf", &vet[i]);
		
	}

	do{
		trocou = 0;

		for(i = 0; i < 3;i++){
			if(vet[i] < vet[i+1]){

				 aux = vet[i];
				 vet[i] = vet[i+1];
				 vet[i+1] = aux;

				 trocou = 1;
			}
		}

	}while(trocou == 1);



	A = vet[0];
	B = vet[1];
	C = vet[2];




	

	if(A  >= B + C){
			printf("NAO FORMA TRIANGULO\n");
	}
	else if (pow(A , 2) == pow(B , 2) + pow(C , 2)){
			printf("TRIANGULO RETANGULO\n");
	}
	else if(pow(A , 2) > pow(B , 2) + pow(C , 2)){
			printf("TRIANGULO OBTUSANGULO\n");
	}
	else if(pow(A , 2) < pow(B , 2) + pow(C , 2)){
			printf("TRIANGULO ACUTANGULO\n");
	}
	if(A == B && A == C){
			printf("TRIANGULO EQUILATERO\n");
	}
	else if(A == B || B == C){
			printf("TRIANGULO ISOSCELES\n");
	}
	
	

	return 0;
}
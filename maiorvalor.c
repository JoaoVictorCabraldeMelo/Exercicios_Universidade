#include <stdio.h>


int main () {

	long long int i, maior = -1, nro, indi;

	for(i = 0;i < 100; i++){
		scanf("%lld", &nro);
		if(nro >= maior){
			maior = nro;
			indi = i;
		}

	}

	printf("%lld\n%lld\n", maior, indi);
}
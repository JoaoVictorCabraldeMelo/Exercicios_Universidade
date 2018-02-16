#include <stdio.h>
#include <math.h>

int main () {

	int vet[3];


	int n, i, j, k = 0;

	scanf("%d", &n);

	for(i = 1;i <= n;i++){
		k = 0;

		for(j=1;j<= 3;j++){
			if(j == 3){
				printf("%0.lf\n", pow(i,j));
				vet[2] = (int) pow(i,j);
			}
			else {
				printf("%0.lf ", pow(i,j));
				vet[k] = (int) pow(i,j);
				k++;
			}
		}

		for(k = 0; k < 3; k++){

			if(k == 2){
				printf("%d\n", vet[k] + 1);
			}
			else if(k == 1){
				printf("%d ", vet[k] + 1);
			}
			else{
				printf("%d ", vet[k]);
			} 

		}

	}

	return 0;
}
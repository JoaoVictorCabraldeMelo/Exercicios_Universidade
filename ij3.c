#include <stdio.h>


int main () {

	int i , j = 7;
	int nro = 0;


	for(i = 1; i <= 9; i+=2){
		

		while(j >= 5 + nro){
			printf("I=%d ", i);
			printf("J=%d\n", j);
			j--;

		}
		

		j += 5;
		nro += 2;
	}

	return 0;
}
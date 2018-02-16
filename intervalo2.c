#include <stdio.h>


int main () {

	long long int quant, x;
	int in = 0, out= 0, i;

	scanf("%lld", &quant);

	for(i = 0; i < quant;i++){
		scanf("%lld", &x);
		if(x >= 10 && x <= 20){
			in++;
		}
		else {
			out++;
		}
	}

	printf("%d in\n", in);
	printf("%d out\n", out);
}
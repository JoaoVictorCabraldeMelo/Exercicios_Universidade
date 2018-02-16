#include <stdio.h>



int main () {

	long long int i, n;

	scanf("%lld", &n);

	for(i = 0; i < 10000; i++){
		if(i % n == 2){
			printf("%lld\n", i);
		}
	}

	return 0;
}
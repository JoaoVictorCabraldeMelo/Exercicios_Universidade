#include <stdio.h>


int main () {

	int n, i;
	double x, y, divi;

	scanf("%d", &n);

	for(i = 0; i < n;i++){
		scanf("%lf %lf", &x, &y);

		if(y == 0){
			printf("divisao impossivel\n");
		}
		else {

			divi = x / y;
			printf("%.1lf\n", divi);
		}
	}

	return 0;
}
#include <stdio.h>
#include <math.h>



int main () {

	int n, i, j;

	scanf("%d", &n);

	for(i = 1; i <= n;i++){

		for(j=1;j<=3;j++){
			if(j == 3){
				printf("%0.lf\n", pow(i,j));
			}
			else {
				printf("%.0lf ", pow(i,j));
				
			}
		}

	}



	return 0;
}
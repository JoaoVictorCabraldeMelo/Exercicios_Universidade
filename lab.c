#include <stdio.h>


int main () {

	long long int i, quant, nro, total = 0, totalc = 0, totalr = 0, totals = 0;
	char animal;

	double porcentoC, porcentoR, porcentoS;

	scanf("%lld", &quant);


	for(i = 0;i < quant * 2;i++){

		scanf("%lld", &nro);
		scanf("%c", &animal);

		if(animal == 'C' || animal == 'c'){
			totalc += nro;
		}
		else if (animal == 'R' || animal == 'r'){
			totalr +=  nro;
		}
		else if (animal == 'S' || animal == 's'){
			totals += nro;
		}

		total += nro;

	}

	total = total / 2;

	porcentoC =  (double) (((double)totalc * 100) / (double)total);

	porcentoR = (double) ((double) totalr * 100) / (double) total;

	porcentoS = (double) ((double) totals * 100) / (double)total;

	printf("Total: %lld cobaias\n", total);
	printf("Total de coelhos: %lld\n", totalc);
	printf("Total de ratos: %lld\n", totalr);
	printf("Total de sapos: %lld\n", totals);
	printf("Percentual de coelhos: %.2lf %%\n", porcentoC);
	printf("Percentual de ratos: %.2lf %%\n", porcentoR);
	printf("Percentual de sapos: %.2lf %%\n", porcentoS);

	return 0;
}
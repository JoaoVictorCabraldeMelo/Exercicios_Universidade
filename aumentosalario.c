#include <stdio.h>
#include <stdlib.h>


int main (){

	float salary, newsal, percent, gain;

	scanf("%f", &salary);

	if(salary <= 400.00){/*se o salario for menor que 400 ele vai colocar o percentual e vai calcular o quanto vai ganhar e seu novo salario*/

		percent = 15;
		gain = (salary * percent) / 100.00;/*idem*/
		newsal = salary + gain;
	}
	else if (salary <= 800.00){
		percent = 12;
		gain = (salary * percent) / 100.00;/*idem*/
		newsal = salary + gain;
	}
	else if (salary <= 1200.00){
		percent = 10;
		gain = (salary * percent) / 100.00;/*idem*/
		newsal = salary + gain;
	}
	else if (salary <= 2000.00){
		percent = 7;
		gain = (salary * percent) / 100.00;/*idem*/
		newsal = salary + gain;
	}
	else if (salary > 2000.00){/*idem*/
		percent = 4;
		gain = (salary * percent) / 100.00;
		newsal = salary + gain;
	}

	printf("Novo salario: %.2f\n",newsal);
	printf("Reajuste ganho: %.2f\n", gain);
	printf("Em percentual: %.0f", percent);
	printf(" %%\n");

	return 0;
}
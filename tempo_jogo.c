#include <stdio.h>
#include <stdlib.h>


int main (){


	int beginh,beginm, finalh,finalm;
	int tempototalh = 0, tempototalm = 0;


	scanf("%d", &beginh);
	scanf("%d", &beginm);
	scanf("%d", &finalh);
	scanf("%d", &finalm);

	/*beginh e começo do horario em horas e finalh e final do jogo em horas */
	/*beginm e começo do horario em minutos e finalm e final do jogo em minutos*/



	if(beginh > finalh){/*se o começo do jogo for maior que o final sendo que o jogo so pode durar no max 24h*/
						/*se passaram um dia  e jogo subtrai para sabe as horas depois soma com o do final*/
		tempototalh = 24 - beginh;
		tempototalh = tempototalh + finalh;
	}
	else if (beginh == finalh){/*aqui a possibilidade de ter passado um dia */

		tempototalh =  tempototalh + 24;
	}
	else if (beginh < finalh){/*aqui nao se passou o dia */

		tempototalh = finalh - beginh;
	}

	if(beginm > finalm){/*aqui nao se passou uma hora ainda*/

		tempototalm = 60 - beginm;
		tempototalm = tempototalm + finalm;
		tempototalh = tempototalh - 1;
	}
	else if (beginm == finalm){/*se passou uma hora */

		tempototalm = 0;
	}
	else if (beginm < finalm){/*se passou uma hora mais alguns minutos*/

		tempototalm = finalm - beginm;
	}


	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempototalh, tempototalm);

	return 0;
}
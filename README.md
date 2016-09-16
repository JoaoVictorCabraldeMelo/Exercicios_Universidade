#include <stdio.h>
/*Um funcionário de uma empresa recebe aumento salarial anualmente.
Sabe-se que: 
esse funcionário foi contratado em 2005, com salário inicial de 
S
;
em 2006 recebeu aumento de 1,5% sobre seu salário inicial;
a partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual 
do ano anterior.
Faça um programa que determina o salário atual desse funcionário. Considere que o ano atual é 
2016. */



int main () {
    float s, j, s_a, s;
    int i;
    scanf("%f", &s);
    for(i = 1; i <= 11; i++){
        for ( j = 0,015; j <= 7.68; j *= 2){
        s_a = s + s * j;
        }
        printf("%.2f\n", s_a); 
        

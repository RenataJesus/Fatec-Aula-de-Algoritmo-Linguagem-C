#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Exerc�cio 18
Entrar com um n�mero de 5 d�gitos e imprimir o n�mero da casa das dezenas.
Por exemplo:
� Entrada: 78954
� Sa�da: 5
*/

main(){
	
	int numero, bilhao,milhar, centena, dezena, unidade;
	
	printf("Digite um n�mero de 5 d�gitos: ");
	scanf("%d", &numero);
	bilhao = numero/10000;
	milhar = (bilhao%10000)/1000;
	centena = (milhar%10000)/100;
	dezena = (numero % 100)/10;
	unidade = dezena%10;
	
	printf("A dezena �: %d", dezena);
}

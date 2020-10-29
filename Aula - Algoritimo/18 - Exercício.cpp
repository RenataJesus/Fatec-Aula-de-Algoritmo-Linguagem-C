#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Exercício 18
Entrar com um número de 5 dígitos e imprimir o número da casa das dezenas.
Por exemplo:
• Entrada: 78954
• Saída: 5
*/

main(){
	
	int numero, bilhao,milhar, centena, dezena, unidade;
	
	printf("Digite um número de 5 dígitos: ");
	scanf("%d", &numero);
	bilhao = numero/10000;
	milhar = (bilhao%10000)/1000;
	centena = (milhar%10000)/100;
	dezena = (numero % 100)/10;
	unidade = dezena%10;
	
	printf("A dezena é: %d", dezena);
}

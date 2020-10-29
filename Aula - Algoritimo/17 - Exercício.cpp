#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Exercício 17
Entrar com um número de 3 dígitos e imprimir o número da casa das unidades.
Por exemplo:
• Entrada: 359
• Saída: 9
*/

main(){
	
	int numero, centena, dezena, unidade;
	
	printf("Digite um número de 3 dígitos: ");
	scanf("%f", &numero);
	
	centena = numero/100;
	dezena = (numero % 100)/10;
	unidade = dezena%10;
	
	printf("A unidade é: %d", unidade);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* 
Exerc�cio 17
Entrar com um n�mero de 3 d�gitos e imprimir o n�mero da casa das unidades.
Por exemplo:
� Entrada: 359
� Sa�da: 9
*/

main(){
	
	int numero, centena, dezena, unidade;
	
	printf("Digite um n�mero de 3 d�gitos: ");
	scanf("%f", &numero);
	
	centena = numero/100;
	dezena = (numero % 100)/10;
	unidade = dezena%10;
	
	printf("A unidade �: %d", unidade);
}

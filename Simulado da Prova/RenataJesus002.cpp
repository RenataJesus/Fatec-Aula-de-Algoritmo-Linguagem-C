#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exerc�cio 2
 Efetuar o calculo da quantidade de litros de combust�vel gastos em uma
viagem, sabendo-se que o carro faz 12 km com um litro.

Dever�o se fornecidos o tempo gasto na viagem e a velocidade m�dia.
Utilizar as seguintes f�rmulas:
Dist�ncia = tempo x velocidade
Litros usados = dist�ncia / 12
	O algoritmo dever� apresentar os valores da
 	- velocidade m�dia,
    - tempo gasto na viagem,
    - dist�ncia percorrida
    - quantidade de litros na viagem. 
*/

main (){
	setlocale(LC_ALL, "Portuguese");
	
 		float distancia, tempo, velocidade, litros;   
	
		printf("Digite a velocidade total percorrida (em km):  ");
		scanf("%f", &velocidade);
		
		printf("Digite o tempo da viagem: ");
		scanf("%f", &tempo);
	
		distancia = tempo*velocidade;
		litros = distancia/12.0;
				
		printf("\nvelocidade m�dia na viagem: %f", velocidade);
		printf("\nO tempo gasto na viagem: %f", tempo);
		printf("\nA distancia percorrida foi: %f", distancia);
		printf("\nquantidade de litros na viagem: %f", litros);
		printf("\n");
		
		
				
	
	system("pause");
}
	


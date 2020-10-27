#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 2
 Efetuar o calculo da quantidade de litros de combustível gastos em uma
viagem, sabendo-se que o carro faz 12 km com um litro.

Deverão se fornecidos o tempo gasto na viagem e a velocidade média.
Utilizar as seguintes fórmulas:
Distância = tempo x velocidade
Litros usados = distância / 12
	O algoritmo deverá apresentar os valores da
 	- velocidade média,
    - tempo gasto na viagem,
    - distância percorrida
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
				
		printf("\nvelocidade média na viagem: %f", velocidade);
		printf("\nO tempo gasto na viagem: %f", tempo);
		printf("\nA distancia percorrida foi: %f", distancia);
		printf("\nquantidade de litros na viagem: %f", litros);
		printf("\n");
		
		
				
	
	system("pause");
}
	


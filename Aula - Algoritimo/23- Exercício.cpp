#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/* Exercício 23
Elabore um algoritmo que possa calcular o volume de um cilindro (figura meramente
ilustrativa).
Volume = área da base x altura. */

main(){

float volume;
float areaBase;
float altura;
 

	printf("Digite o valor da área da base: ");
	scanf("%f", &areaBase);
	
	printf("\nDigite o valor da area da altura: ");
	scanf("%f", &altura);

 

volume= ( areaBase * altura);
 
 printf ("\nO volume eh:% .2f", volume);

}

#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/* Crie um algoritmo que possa calcular a área de uma coroa de forma circular (figura
meramente ilustrativa).
Área = (Área da circunferência Maior) – (Área da circunferência menor)
Exercício. */

main(){

float area;
float circunferenciaMaior;
float circunferenciaMenor;
 

	printf("Digite o valor da area da circunferencia maior: ");
	scanf("%f", &circunferenciaMaior);
	
	printf("\nDigite o valor da area da circunferencia menor: ");
	scanf("%f", &circunferenciaMenor);

 

area= ((circunferenciaMaior) - (circunferenciaMenor));
 
 printf ("\nA area eh:% .2f", area);

}

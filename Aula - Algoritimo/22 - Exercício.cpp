#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/* Crie um algoritmo que possa calcular a �rea de uma coroa de forma circular (figura
meramente ilustrativa).
�rea = (�rea da circunfer�ncia Maior) � (�rea da circunfer�ncia menor)
Exerc�cio. */

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

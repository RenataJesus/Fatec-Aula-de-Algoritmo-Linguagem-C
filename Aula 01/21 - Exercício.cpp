#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/* Crie um algoritmo que possa calcular a �rea de uma coroa de forma circular (figura
meramente ilustrativa).
�rea = (�rea da circunfer�ncia Maior) � (�rea da circunfer�ncia menor)
Exerc�cio. */

main(){

float area, CircunferenciaMaior,CircunferenciaMenor;
 
printf ("Digite Area da circunfer�ncia Maior :");
scanf ("% f", &CircunferenciaMaior);

printf("Digite a area da circunferencia menor");
scanf("%f", &CircunferenciaMenor);


 

area= ((CircunferenciaMaior) - (CircunferenciaMenor));
 
 printf ("\nA area eh:% .2f", area);

}

#include <stdio.h> // Escrita e Leitura
#include <stdlib.h> // Biblioteca Auxiliar
#include <math.h> // biblioteca de matematica

/* Crie um algoritmo que possa calcular a área de uma coroa de forma circular (figura
meramente ilustrativa).
Área = (Área da circunferência Maior) – (Área da circunferência menor)
Exercício. */

main(){

float area, CircunferenciaMaior,CircunferenciaMenor;
 
printf ("Digite Area da circunferência Maior :");
scanf ("% f", &CircunferenciaMaior);

printf("Digite a area da circunferencia menor");
scanf("%f", &CircunferenciaMenor);


 

area= ((CircunferenciaMaior) - (CircunferenciaMenor));
 
 printf ("\nA area eh:% .2f", area);

}

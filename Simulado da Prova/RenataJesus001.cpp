#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 01
Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a
fórmula: Volume = pi*raio2*Altura. */

main (){
		setlocale(LC_ALL, "Portuguese");
	
 float volumeLata, raioLata, alturaLata;
 
   printf("Informe o raio da lata:");
   scanf("%f",&raioLata);
   printf("\nInforme a altura da lata:");
   scanf("%f",&alturaLata);
   
   volumeLata = pow(raioLata,2)*M_PI*alturaLata;
   printf("\nO volume da lata de oleo é %f  ", volumeLata );
	
	
}

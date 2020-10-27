#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Calcular e apresentar o valor do volume de uma lata de tinta tendo como 

base as seguintes informacoes:
A base da lata tem a forma de um quadrado
A formula para calcular o volume da lata é:
(Area da base da lata) * altura da lata 

*/

main (){
		setlocale(LC_ALL, "Portuguese");
	
 float volumeLata, ladoLata, alturaLata;
 
   printf("Informe o valor lateral da lata: ");
   scanf("%f",&ladoLata);
   printf("\nInforme a altura da lata:");
   scanf("%f",&alturaLata);
   
   volumeLata = ladoLata*ladoLata*alturaLata;
   printf("\nO volume da lata de tinta é %.2f  ", volumeLata );
	
	
}

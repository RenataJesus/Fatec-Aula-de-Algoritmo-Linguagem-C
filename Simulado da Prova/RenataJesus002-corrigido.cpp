#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 3 - Criar um algoritmo que leia um valor de hora e informe quantos minutos se
passaram desde o início do dia. */

main (){
	
 int hora, minuto;
 
   printf("Informe hora: ");
   scanf("%d", &hora);
  
   minuto = hora*60;
   printf("Passaram-se %d minuto ", minuto );
	
	
}

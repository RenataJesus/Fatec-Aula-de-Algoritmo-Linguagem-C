#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 3 - Criar um algoritmo que leia um valor de hora e informe quantos minutos se
passaram desde o início do dia. */

main (){
	
 int hora, minuto, segundo, segundoPassado;
 
   printf("Informe hora:\n");
   scanf("%d", &hora);
   
   printf("Informe o minuto:\n");
   scanf("%d",&minuto);
   printf("Informe o segundo:\n");
   scanf("%d",&segundo);
   segundoPassado = (hora*3600)+(minuto*60+segundo);
   printf("Passaram-se %d segundos ", segundoPassado );
	
	
}

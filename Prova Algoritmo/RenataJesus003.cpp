#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 3
		Sabemos que um dia tem 24 horas, uma hora tem 60 minutos e 
		um minuto tem 60 segundos. 
		Crie um algoritmo que leia um valor de hora e informe quantos segundos se
		passaram desde o início do dia.
		Observação: o valor de entrada deve ser obrigatoriamente maior que zero.
*/

main (){
		setlocale(LC_ALL, "Portuguese");
	
 int hora, minuto, segundo;
 
   printf("Informe a hora: (formato 24h))\n");
   scanf("%d", &hora);
   if (hora >0){
     segundo = hora*pow(60,2);
   	
   	printf("Passaram-se %d segundos ", segundo);
   }  else {
			printf ( "número inválido ");				
		}
  
	
}

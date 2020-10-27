+-#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Exercício 4
	Crie um algoritmo para calcular a média ponderada de um curso. O algoritmo
	deve ter como entrada (respectivamente) a nota das atividades e o peso das atividades.
	Sabemos que ao todo são três atividades.
Observação: Os valores de entrada devem ser obrigatoriamente maiores que zero..
*/

main (){
		setlocale(LC_ALL, "Portuguese");
	
 float media, nota01, peso01,nota02, peso02, nota03, peso03;
 
   printf("Informe a primeira nota:");
   scanf("%f", &nota01);
   printf("\nInforme o peso da primeira nota: ");
   scanf("%f", &peso01);
   
   printf("\nInforme a segunda nota:");
   scanf("%f", &nota02);
   printf("\nInforme o peso da segunda nota:");
   scanf("%f", &peso02);
   
   printf("\nInforme a terceira nota:");
   scanf("%f", &nota03);
   printf("\nInforme o peso da terceira nota: ");
   scanf("%f", &peso03);
   
   if (nota01 >0 and nota02>0 and nota03>0 and peso01>0 and peso02 >0 and peso03>0){
    
    media = (nota01 *peso01 + nota02 * peso02 + nota03*peso03)/(peso01+peso02+peso03);
   	
   	printf("\n a media ponderada das notas é %.2f : ", media);
   	printf("\n");
    printf("\n sendo nota 01 %.2f com peso: %.2f", nota01,peso01);
    printf("\n sendo nota 02 %.2f com peso: %.2f", nota02,peso02);
    printf("\n sendo nota 03 %.2f com peso: %.2f", nota03,peso03);
    
   }  else {
			printf ( "\n Notas inválidas ");				
		}
  
	
}

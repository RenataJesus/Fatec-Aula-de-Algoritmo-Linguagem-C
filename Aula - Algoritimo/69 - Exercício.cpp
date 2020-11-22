#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 69
• Criar um algoritmo que receba um número obrigatoriamente maior que zero e
imprima todos os números de zero até o número digitado.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um número: ");
	scanf("%d", &numero);
	int inicio=0;
			
			if(numero>0){
				while(inicio<=numero){
				printf("%d ...", inicio);
				inicio++;
				
				}else{
					printf("número inválido!");
				}
				
			}
}

 



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Exercício 37
Elabore um algoritmo que leia três números inteiros e diga se eles são pares ou
ímpares.
Os números devem ser obrigatoriamente maiores que zero. */

main (){
	
	setlocale(LC_ALL, "Portuguese");

	 int numero01,numero02, numero03;
	
		printf("Digite o primero número:  ");
		scanf("%d", &numero01);
		
		printf("Digite o segundo número:  ");
		scanf("%d", &numero02);
		
		printf("Digite o terceiro número:  ");
		scanf("%d", &numero03);
		
	if(numero01<0 && numero02<0 && numero03<0){
		printf("Números inválidos");
		exit(0);
	}	
			if(numero01%2==0){
			printf("Os número %d, é par\n", numero01);
		}else{
			printf("Os número %d, é ímpar\n", numero01);
		}				
		
		if(numero02 %2==0){
			printf("Os número %d, é par\n", numero02);
		}else{
			printf("Os número %d, é ímpar\n", numero02);
		}
		
		if(numero03%2==0){
			printf("Os número %d, é par\n", numero03);
		}else{
			printf("Os número %d, é ímpar\n", numero03);
		}
			
		
	system("pause");
}

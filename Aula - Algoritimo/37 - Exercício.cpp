#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Exerc�cio 37
Elabore um algoritmo que leia tr�s n�meros inteiros e diga se eles s�o pares ou
�mpares.
Os n�meros devem ser obrigatoriamente maiores que zero. */

main (){
	
	setlocale(LC_ALL, "Portuguese");
/*
	 int numero01,numero02, numero03;
	
		printf("Digite o primero n�mero:  ");
		scanf("%d", &numero01);
		
		printf("Digite o segundo n�mero:  ");
		scanf("%d", &numero02);
		
		printf("Digite o terceiro n�mero:  ");
		scanf("%d", &numero03);
		
	if(numero01<=0 && numero02<=0 && numero03<=0){
		printf("N�meros inv�lidos");
		exit(0);
	}	
			if(numero01%2==0){
			printf("Os n�mero %d, � par\n", numero01);
		}else{
			printf("Os n�mero %d, � �mpar\n", numero01);
		}				
		
		if(numero02 %2==0){
			printf("Os n�mero %d, � par\n", numero02);
		}else{
			printf("Os n�mero %d, � �mpar\n", numero02);
		}
		
		if(numero03%2==0){
			printf("Os n�mero %d, � par\n", numero03);
		}else{
			printf("Os n�mero %d, � �mpar\n", numero03);
		}
			
		*/
		int numero;
		
		for (int i = 1; i<4; i++){
			printf("\n\nDigite o %d� numero:", i);
			scanf("%d", &numero);
			
			if(numero <= 0){
				printf("Numero menor ou igual a zero, invalido!\n");
			} else if(numero % 2 == 0){
				printf("Numero par\n");
			} else {
				printf("Numero impar\n");
			}
			
		}
	system("pause");
}

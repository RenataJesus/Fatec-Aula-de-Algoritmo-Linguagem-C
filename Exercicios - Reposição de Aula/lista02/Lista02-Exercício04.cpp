#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
5. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem
decrescente.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int numero1, numero2, numero3,resultado;
		
		printf("Digite um numero: \n");
		scanf("%d", &numero1);
		
		printf("Digite outro numero: \n");
		scanf("%d", &numero2);
		
		printf("Digite outro numero: \n");
		scanf("%d", &numero3);
		
		if((numero1<numero2)&&(numero2<numero3)){
			printf("%d , %d e %d \n",numero3,numero2,numero1);
			
		}else if((numero2<numero1)&&(numero1<numero3)){
				printf("%d , %d e %d \n",numero2,numero1,numero3);
		}else{
				printf("%d , %d e %d \n",numero1,numero2,numero3);
		}
	}

	


 



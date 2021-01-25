#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
	1. Faça um programa que solicite a idade de uma pessoa e diga se ela pode dirigir ou
não. Obs: idade >= 18, pessoa pode dirigir, caso contrário, não pode.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int idade=0;
		
		printf("Digite sua idade: \n");
		scanf("%d", &idade);
					
			if(idade>=18){
				printf("Você tem %d anos e pode dirigir", idade);
			
		}else{
					printf("Você tem %d anos e não pode dirigir", idade);
		}
	}

	


 



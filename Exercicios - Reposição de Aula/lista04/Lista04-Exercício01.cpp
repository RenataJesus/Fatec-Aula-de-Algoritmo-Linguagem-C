#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
	1. Fa�a um programa que solicite a idade de uma pessoa e diga se ela pode dirigir ou
n�o. Obs: idade >= 18, pessoa pode dirigir, caso contr�rio, n�o pode.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int idade=0;
		
		printf("Digite sua idade: \n");
		scanf("%d", &idade);
					
			if(idade>=18){
				printf("Voc� tem %d anos e pode dirigir", idade);
			
		}else{
					printf("Voc� tem %d anos e n�o pode dirigir", idade);
		}
	}

	


 



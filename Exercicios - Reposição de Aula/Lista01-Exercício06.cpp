#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Faça um algoritmo para receber um número qualquer e informar na tela se é par ou
ímpar.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int number=0;
		printf("Digite um número: \n");
		scanf("%d", &number);
		
		if(number%2==0){
			
			printf("\n\n O número %d  é par!\n", number);
		
		}else{
			printf("\n\n O número %d  é ímpar!\n", number);;

		}
	}

	


 



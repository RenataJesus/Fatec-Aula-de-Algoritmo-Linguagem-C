#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
4. Construa um algoritmo que receba dois números e retorne se o segundo é a raiz
quadrada do primeiro ou não.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		float numero1=0, numero2=0, raiz;
		
		printf("Digite o primeiro número: \n");
		scanf("%f", &numero1);
			
		printf("Digite o segundo número: \n");
		scanf("%f", &numero2);	
			raiz = sqrt(numero1);
			if(raiz==numero2){
				printf("o número 2 é a raiz do numero 1");
			
		}else{
				printf("O número 2 não é a raiz do numero 1");
		}
	}

	


 



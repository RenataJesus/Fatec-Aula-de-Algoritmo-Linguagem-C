#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
4. Construa um algoritmo que receba dois n�meros e retorne se o segundo � a raiz
quadrada do primeiro ou n�o.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		float numero1=0, numero2=0, raiz;
		
		printf("Digite o primeiro n�mero: \n");
		scanf("%f", &numero1);
			
		printf("Digite o segundo n�mero: \n");
		scanf("%f", &numero2);	
			raiz = sqrt(numero1);
			if(raiz==numero2){
				printf("o n�mero 2 � a raiz do numero 1");
			
		}else{
				printf("O n�mero 2 n�o � a raiz do numero 1");
		}
	}

	


 



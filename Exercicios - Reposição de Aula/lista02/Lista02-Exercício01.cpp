#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
1. Faça um algoritmo que leia dois valores inteiros A e B. Se os valores forem iguais deverá
se somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos
deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int a = 0, b=0, c=0;
		printf("Digite o primeiro numero: \n");
		scanf("%d", &a);
		
		printf("Digite o segundo numero: \n");
		scanf("%d", &b);

		
		if(a==b){
			c=a+b;
			printf("O valor de C é: %d \n", c);
			
		}else if(a!=b){
					c=a*b;
			printf("O valor de C é: %d \n", c);
		}
	}

	


 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
1. Fa�a um algoritmo que leia dois valores inteiros A e B. Se os valores forem iguais dever�
se somar os dois, caso contr�rio multiplique A por B. Ao final de qualquer um dos c�lculos
deve-se atribuir o resultado para uma vari�vel C e mostrar seu conte�do na tela.
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
			printf("O valor de C �: %d \n", c);
			
		}else if(a!=b){
					c=a*b;
			printf("O valor de C �: %d \n", c);
		}
	}

	


 



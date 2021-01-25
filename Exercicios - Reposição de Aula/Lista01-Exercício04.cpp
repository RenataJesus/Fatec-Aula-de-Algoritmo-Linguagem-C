#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
4. Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é
menor que C.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int a=0, b=0, c=0, soma=0;
		printf("Digite A: \n");
		scanf("%d", &a);
		
		printf("Digite B: \n");
		scanf("%d", &b);
		
		printf("Digite C: \n");
		scanf("%d", &c);
		
		soma=a+b;
		if(soma<c){
			
			printf("\n\n A soma de A + B é:  %d  e é menor que C\n", soma);
		
		}else{
				printf("--- Fim Algoritmo ---- ");

		}
	}

	


 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Construir um algoritmo que leia dois valores numericos e efetue sua adicao.

Caso o resultado da adicao seja maior que 10, exibir os numeros digitados, o
valor da adicao e a raiz cubica da adicao.

Caso contrario exibir somente os valores digitados e o valor da adicao.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  int  numero1, numero2,soma;
  
  	printf("Digite o primeiro número: ");
  	scanf("%d", &numero1);
    
	printf("Digite o segundo número: ");
  	scanf("%d", &numero2);
	
	soma = numero1+numero2;
		    	
       if(soma>10){
  			printf("\nOs valores digitados são %d e %d \n", numero1, numero2);
  			printf("\nA soma dos valores digitados é %d \n", soma);
  			float raizCubica = cbrt(soma);
  			printf("\nA raiz cubica da soma é %.25f \n", raizCubica);
  			
  	  	}else{
    		printf("\nOs valores digitados são %d e %d \n", numero1, numero2);
  			printf("\nA soma dos valores digitados é %d \n", soma);
		} 
	
 }

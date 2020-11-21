#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 44 - Efetuar a leitura de três valores e apresentar como resultado final a soma
dos quadrados dos três valores lidos. 
Apresentar também se a soma é um número par
ou ímpar.
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  float  numero1, numero2, numero3;
  int soma;
  
  	printf("Digite o primeiro número: ");
  	scanf("%f", &numero1);
  	
  	printf("Digite o segundo número: ");
  	scanf("%f", &numero2);
  	
  	printf("Digite o terceiro número: ");
  	scanf("%f", &numero3);
  	
  	soma = pow(numero1,2)+ pow(numero2,2) + pow(numero3,2);
    
    printf("\nA soma dos quadrados é: %d", soma);
    
    if(soma%2==0){
    	  printf("\nA soma %d é par", soma);
    
	}else{
		printf("\nA soma %d é ímpar", soma);
	}
	
 }

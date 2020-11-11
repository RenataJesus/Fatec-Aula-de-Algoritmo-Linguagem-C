#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Ler um número qualquer positivo e maior que zero.

Se o valor do número elevado à quarta for par e múltiplo de cinco o algoritmo
deverá imprimir a seguinte mensagem:

- “O número digitado foi __.”
- “Seu valor elevado ao quadrado é __.”
- “Seu valor elevado ao cubo é __.”
- “Seu valor elevado a sétima é __.”

Se o valor for ímpar o algoritmo deverá imprimir a seguinte mensagem:

- “O número digitado foi __.”
- “Sua raiz quadrada é __.”
- “Sua raiz cúbica é __.”
- “Sua raiz a sétima é __.”

Observação: Se o usuário digitar um valor inválido o algoritmo deverá emitir uma
mensagem de erro.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  int  numero;
  
  	printf("Digite um número: ");
  	scanf("%d", &numero);
    	
  	if(numero%2==0){
  		printf("O número digitado foi: %d\n", numero);
  		
		float quadrado = pow(numero,2);
  		printf("\nSeu valor ao quadrado é: %.2f\n", quadrado);
  		
		float cubo = pow(numero,3);
		printf("\nSeu valor ao cubo é: %.2f\n", cubo);
  		
  		float setima = pow(numero,7);
		printf("\nSeu valor a sétima é: %.2f\n", setima);
  		
	  }else if(numero%2!=0){
	  	
		printf("O número digitado foi: %d\n\n", numero);
  
  		float quadrado = pow(numero,2);
  		printf("\nSeu valor ao quadrado é: %.2f\n", quadrado);
  		
		float raiz = sqrt(numero);
		printf("\nSua raiz quadrada é: %.2f\n", raiz);
		
  		float raizCubica = cbrt(numero);
		printf("\nSua raiz cúbica é: %.2f\n", raizCubica);
		
		float raizSetima = sqrt(pow(numero,7));
		printf("\nSua raiz sétima é: %.2f\n", raizSetima);
	  	
	  }
 }

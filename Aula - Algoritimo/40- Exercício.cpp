#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Ler um n�mero qualquer positivo e maior que zero.

Se o valor do n�mero elevado � quarta for par e m�ltiplo de cinco o algoritmo
dever� imprimir a seguinte mensagem:

- �O n�mero digitado foi __.�
- �Seu valor elevado ao quadrado � __.�
- �Seu valor elevado ao cubo � __.�
- �Seu valor elevado a s�tima � __.�

Se o valor for �mpar o algoritmo dever� imprimir a seguinte mensagem:

- �O n�mero digitado foi __.�
- �Sua raiz quadrada � __.�
- �Sua raiz c�bica � __.�
- �Sua raiz a s�tima � __.�

Observa��o: Se o usu�rio digitar um valor inv�lido o algoritmo dever� emitir uma
mensagem de erro.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  int  numero;
  
  	printf("Digite um n�mero: ");
  	scanf("%d", &numero);
    	
  	if(numero%2==0){
  		printf("O n�mero digitado foi: %d\n", numero);
  		
		float quadrado = pow(numero,2);
  		printf("\nSeu valor ao quadrado �: %.2f\n", quadrado);
  		
		float cubo = pow(numero,3);
		printf("\nSeu valor ao cubo �: %.2f\n", cubo);
  		
  		float setima = pow(numero,7);
		printf("\nSeu valor a s�tima �: %.2f\n", setima);
  		
	  }else if(numero%2!=0){
	  	
		printf("O n�mero digitado foi: %d\n\n", numero);
  
  		float quadrado = pow(numero,2);
  		printf("\nSeu valor ao quadrado �: %.2f\n", quadrado);
  		
		float raiz = sqrt(numero);
		printf("\nSua raiz quadrada �: %.2f\n", raiz);
		
  		float raizCubica = cbrt(numero);
		printf("\nSua raiz c�bica �: %.2f\n", raizCubica);
		
		float raizSetima = sqrt(pow(numero,7));
		printf("\nSua raiz s�tima �: %.2f\n", raizSetima);
	  	
	  }
 }

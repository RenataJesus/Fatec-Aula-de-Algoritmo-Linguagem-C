#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Criar um algoritmo que receba um numero inteiro
 - imprima o numero e diga se o numero é par ou impar
o algoritmo sera finalizado qdo o usuario digitar zero.
 5
 5 eh impar
 2
 2 eh par
 0
 fim Não utilizar cinco variáveis.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");

  int numero; 
  
  printf("Digite um número: ");
  scanf("%d", &numero);
  
 	if (numero !=0){
 		if(numero%2==0 ){
 		printf("Número %d é par! ", numero);
	 	}else{
	 	printf("Número %d é ímpar! ", numero);
	 	}
 	
	 }while(numero !=0);
 

 }


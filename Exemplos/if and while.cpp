#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Criar um algoritmo que receba um numero inteiro
 - imprima o numero e diga se o numero � par ou impar
o algoritmo sera finalizado qdo o usuario digitar zero.
 5
 5 eh impar
 2
 2 eh par
 0
 fim N�o utilizar cinco vari�veis.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");

  int numero; 
  
  printf("Digite um n�mero: ");
  scanf("%d", &numero);
  
 	if (numero !=0){
 		if(numero%2==0 ){
 		printf("N�mero %d � par! ", numero);
	 	}else{
	 	printf("N�mero %d � �mpar! ", numero);
	 	}
 	
	 }while(numero !=0);
 

 }


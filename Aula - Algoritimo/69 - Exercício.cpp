#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 69
� Criar um algoritmo que receba um n�mero obrigatoriamente maior que zero e
imprima todos os n�meros de zero at� o n�mero digitado.

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero;
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	int inicio=0;
			
			if(numero>0){
				while(inicio<=numero){
				printf("%d ...", inicio);
				inicio++;
				
				}else{
					printf("n�mero inv�lido!");
				}
				
			}
}

 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 76
Fa�a um programa que calcule e mostre a soma dos 50 primeiros n�meros pares
positivos.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero,soma;	
			
				while(numero<=50){
					if(numero%2==0){
					int soma=numero+numero;
					printf("%d ...", soma);
					}
					numero++;
				}
				
			
}

 



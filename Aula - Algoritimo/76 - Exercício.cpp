#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 76
Faça um programa que calcule e mostre a soma dos 50 primeiros números pares
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

 



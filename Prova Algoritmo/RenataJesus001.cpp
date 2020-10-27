#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Crie um algoritmo que tenha como entrada um número qualquer e imprima
se o número digitado é par ou ímpar. */

main () {
	setlocale(LC_ALL, "Portuguese");

	int numero;
	
		printf ( " Digite um número: " );
		scanf ( "%d" , & numero);
				
		if ((numero%2)==0 ) {
			printf ( "\n O numero %d é par " , numero);	
		} else {
			printf ( "\n O numero %d é impar" , numero);				
		}		
}

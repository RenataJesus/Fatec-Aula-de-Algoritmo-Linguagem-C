#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
/*Renata Jesus*/

/* Crie um algoritmo que tenha como entrada um n�mero qualquer e imprima
se o n�mero digitado � par ou �mpar. */

main () {
	setlocale(LC_ALL, "Portuguese");

	int numero;
	
		printf ( " Digite um n�mero: " );
		scanf ( "%d" , & numero);
				
		if ((numero%2)==0 ) {
			printf ( "\n O numero %d � par " , numero);	
		} else {
			printf ( "\n O numero %d � impar" , numero);				
		}		
}

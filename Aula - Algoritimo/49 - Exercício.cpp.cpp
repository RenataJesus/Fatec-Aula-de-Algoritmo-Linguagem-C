#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero, aux = 0, inverso = 0, qtd = 0;
	
	do{
		printf("Digite um N�mero inteiro de 4 digitos: ");
		scanf("%i", &numero);
	
		if(numero <= 999){
			printf("N�mero inv�lido!");	
		}
	}while(numero>=1000);
	
		do {
			aux = numero % 10;
			inverso = inverso * 10 + aux;
			numero /= 10;
		} while(numero != 0);

	
	printf("\n\t>>> N�mero Invertido: %i", inverso);
		
	if(inverso % 2 == 0){
		printf("\n\t>>> Par");
	} else {
		printf("\n\t>>> �mpar");
	}
	
	

	
}


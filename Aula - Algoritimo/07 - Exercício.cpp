#include <stdio.h>
#include <stdlib.h>

//Ler um número inteiro e imprimir seu antecessor e seu sucessor.
//SAÍDA:
//O número digitado foi ..., seu antecessor é ... e seu sucessor é ...

main(){
	
	int numero, antecessor, sucessor;
	
	
	printf("Digite um numero: ");
	scanf ("%d", &numero);
	
	antecessor = numero -1;
	sucessor = numero + 1;
	
	printf("\n O número digitado foi:  %d\n", numero);
	printf("\n Seu antecessor eh %d: \n", antecessor);
	printf ("\n Seu sucessor eh %d: \n", sucessor);
	
	
	system("pause");
}

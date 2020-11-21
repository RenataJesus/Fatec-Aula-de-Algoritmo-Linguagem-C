#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exercício 49 - Faça um programa para ler um número inteiro, positivo de quatro dígitos,
e gerar outro número formado pelos dígitos invertidos do número lido. Verificar
também se o número invertido é par ou ímpar.
Exemplo:
Numero lido: 1234
Número invertido: 4321 - Ímpar.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int numero, contador, invertido;

	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	printf (" o número original é% d \\ n", numero);
 
	if(numero>=0){
		do{
			invertido = numero%10;
			printf("%d", invertido);
		}while(numero!=0);
			printf("\n");
		}else if( numero>1){
			numero =numero*-1;
		}
	

	
	printf("%d", numero);
}


  
 

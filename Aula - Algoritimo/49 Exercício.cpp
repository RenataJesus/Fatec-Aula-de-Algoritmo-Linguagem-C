#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exerc�cio 49 - Fa�a um programa para ler um n�mero inteiro, positivo de quatro d�gitos,
e gerar outro n�mero formado pelos d�gitos invertidos do n�mero lido. Verificar
tamb�m se o n�mero invertido � par ou �mpar.
Exemplo:
Numero lido: 1234
N�mero invertido: 4321 - �mpar.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int numero, contador, invertido;

	
	printf("Digite o numero: ");
	scanf("%d", &numero);
	
	printf (" o n�mero original �% d \\ n", numero);
 
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


  
 

#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*Exercício 74
Elabore um programa que faça leitura de vários números inteiros, até que se digite um
número negativo.
O programa tem que retornar o maior e o menor número lido.*/
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	int numero, maior, menor;

	printf("Digite um numero inteiro: ");

	scanf("%d", &numero);

	maior = menor = numero;

	while(numero>0){

		if(numero>maior)
			maior = numero;

		if (numero<menor)

			menor=numero;

		printf("Digite um número inteiro: ");

		scanf("%d", &numero);

	}

	printf("O maior número digitado foi: %d \n", maior);

	printf("O menor número digitado foi: %d \n\n", menor);

	printf("Fim do programa. \n\n");

	system("pause");

	return 0;

}
			
		
		

			
			
       	


  
 

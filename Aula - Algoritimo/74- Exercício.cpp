#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*Exerc�cio 74
Elabore um programa que fa�a leitura de v�rios n�meros inteiros, at� que se digite um
n�mero negativo.
O programa tem que retornar o maior e o menor n�mero lido.*/
 
  
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

		printf("Digite um n�mero inteiro: ");

		scanf("%d", &numero);

	}

	printf("O maior n�mero digitado foi: %d \n", maior);

	printf("O menor n�mero digitado foi: %d \n\n", menor);

	printf("Fim do programa. \n\n");

	system("pause");

	return 0;

}
			
		
		

			
			
       	


  
 

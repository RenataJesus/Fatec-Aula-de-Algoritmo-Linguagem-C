#include <stdio.h>
#include <stdlib.h>

//Cria um algoritmo que receba 5 números do tipo float e exiba a soma com a seguinte frase:
//“Os números digitados foram ..., ..., ..., ... e sua soma é ...
 //%.2 é o número de casas decimais, 
main(){
	
	float numero1, numero2, numero3, numero4, numero5, somaTotal;
	
	printf("Digite primeiro numero : ");
	scanf ("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf ("%f", &numero2);
	
	printf("Digite o segundo numero: ");
	scanf ("%f", &numero3);
	
	printf("Digite o segundo numero: ");
	scanf ("%f", &numero4);
	
	printf("Digite o segundo numero: ");
	scanf ("%f", &numero5);
	
	somaTotal = numero1 + numero2 + numero3 + numero4 + numero5;
	
	printf("\n Os numeros digitados foram %.2f, %.2f, %.2f, %.2f, %.2f \n", numero1, numero2, numero3, numero4, numero5);
	printf( " E a sua soma eh: %.2f\n", somaTotal);
	
	system("pause");
	
}

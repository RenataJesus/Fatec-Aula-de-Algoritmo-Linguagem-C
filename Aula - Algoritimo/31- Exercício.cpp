#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Exerc�cio 31
Em �poca de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas
oferecendo desconto.
Fa�a um algoritmo que possa entrar com o valor de um produto e imprimir o novo valor
tendo em vista que o desconto foi de 9%.
O valor do produto n�o pode ser menor ou igual a zero..*/

main (){
	 setlocale(LC_ALL, "Portuguese");

	float produto,valorComDesconto;
	
		printf("Digite o valor do produto:  ");
		scanf("%f", &produto);
		
		valorComDesconto = produto -(produto*9/100);			
		printf("\n O valor do produto com desconto �: %f \n\n", valorComDesconto);				
			
		
	system("pause");
}

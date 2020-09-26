#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Exercício 31
Em época de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas
oferecendo desconto.
Faça um algoritmo que possa entrar com o valor de um produto e imprimir o novo valor
tendo em vista que o desconto foi de 9%.
O valor do produto não pode ser menor ou igual a zero..*/

main (){
	 setlocale(LC_ALL, "Portuguese");

	float produto,valorComDesconto;
	
		printf("Digite o valor do produto:  ");
		scanf("%f", &produto);
		
		valorComDesconto = produto -(produto*9/100);			
		printf("\n O valor do produto com desconto é: %f \n\n", valorComDesconto);				
			
		
	system("pause");
}

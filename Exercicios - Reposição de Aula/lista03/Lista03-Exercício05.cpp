#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
	5. Crie um algoritmo que receba o valor de um produto, a quantidade de presta��es
	que uma pessoa pretende pagar pelo produto e o valor proposto por essa pessoa para
	pagar em cada presta��o. Por fim, retorne ao usu�rio se a quantidade e o valor que o
	cliente quer pagar em cada presta��o ser� o suficiente para pagar pelo produto ou n�o.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		float valorProduto=0, quantidadePrestacoes=0, valorPagar=0, valorProposto=0;
		
		printf("Digite o valor do produto: \n");
		scanf("%f", &valorProduto);
			
		printf("Digite a quantidade de presta��es que pretende pagar pelo produto: \n");
		scanf("%f", &quantidadePrestacoes);
		
		printf("Digite o valor que quer pagar em cada presta��o: \n");
		scanf("%f", &valorProposto);
			
			valorPagar=quantidadePrestacoes*valorProposto;
			
			if(valorPagar==valorProduto){
				printf("O valor de R$ %.2f � o suficiente para pagar o valor do produto", valorProposto);
			
		}else{
				printf("O valor de R$ %.2f n�o � o suficiente para pagar o valor do produto", valorProposto);
		}
	}

	


 



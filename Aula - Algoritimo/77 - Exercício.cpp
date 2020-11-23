#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 77
Faça um programa que receba vários números, calcule e mostre:
• A soma dos números digitados
• A quantidade de números digitados
• A média dos números digitados
• O maior número digitado
• O menor número digitado
• A média dos números pares
• Finalize a entrada de dados caso o usuário informe o valor 0.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero,maior,menor;
	int quantidadePar;
	float media,soma, quantidadeNumero,somaPar, mediaPar;
	
		printf("Digite um número: ");
		scanf("%d", &numero);
			maior=numero;
			menor=numero;	
			
			while(numero!=0){
				soma= numero+soma;
				quantidadeNumero+=1;
				media= soma/quantidadeNumero;
				
				if(numero>maior){
					maior=numero;
				}else if(numero<menor){
					menor=numero;
				}
				if(numero%2==0){
				somaPar+= numero;
				quantidadePar+=1;
				mediaPar= somaPar/quantidadePar;
					
				}
							
				printf("DDigite um número: ");
				scanf("%d", &numero);
			}
				printf("\nA quantidade de números digitados: %.0f",quantidadeNumero);
				printf("\nA soma dos números digitados: %.0f",soma);
				printf("\nA média dos números digitados: %.2f",media);
				printf("\nO maior número digitado: %d",maior);
				printf("\nO menor número digitado: %d",menor);
				printf("\nA média dos números pares: %f",mediaPar);
				printf("\n%f e... %d", somaPar, quantidadePar);
}

 



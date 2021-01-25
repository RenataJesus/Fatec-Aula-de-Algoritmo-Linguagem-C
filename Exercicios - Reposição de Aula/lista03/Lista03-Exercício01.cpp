#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
5. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o
mês em que ela nasceu).
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int idade=0, anoAtual, anoNascimento;
		
		printf("Digite o ano que você nasceu: \n");
		scanf("%d", &anoNascimento);
		
		printf("Digite o ano atual: \n");
		scanf("%d", &anoAtual);	
			
		idade = anoAtual- anoNascimento; 	
			
			if(idade>=16){
			printf("Você tem %i anos e Você já pode votar", idade);
			
		}else{
				printf("Você tem %i anos e Você não pode votar", idade);
		}
	}

	


 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
5. Escreva um programa para ler o ano de nascimento de uma pessoa e escrever uma
mensagem que diga se ela poder� ou n�o votar este ano (n�o � necess�rio considerar o
m�s em que ela nasceu).
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
		int idade=0, anoAtual, anoNascimento;
		
		printf("Digite o ano que voc� nasceu: \n");
		scanf("%d", &anoNascimento);
		
		printf("Digite o ano atual: \n");
		scanf("%d", &anoAtual);	
			
		idade = anoAtual- anoNascimento; 	
			
			if(idade>=16){
			printf("Voc� tem %i anos e Voc� j� pode votar", idade);
			
		}else{
				printf("Voc� tem %i anos e Voc� n�o pode votar", idade);
		}
	}

	


 



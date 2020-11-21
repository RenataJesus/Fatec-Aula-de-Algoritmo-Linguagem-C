#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exercício 50 - Faça um programa que leia o valor da hora de trabalho (em reais) e o
número de horas trabalhadas no mês, e exiba na tela o valor a ser pago ao funcionário,
adicionando 10% sobre o valor calculado.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	float valorHora, horasTrabalhadas, valorReceber;

	
	printf("Digite o valor da hora de trabalho (em reais): ");
	scanf("%f", &valorHora);
	
	printf("Digite o número de horas trabalhadas no mês: ");
	scanf("%f", &horasTrabalhadas);
	 valorReceber = valorHora*horasTrabalhadas;
	 valorReceber = valorReceber+ (valorReceber*0.10);
	printf("O valor a receber é R$: %f ",valorReceber );
}

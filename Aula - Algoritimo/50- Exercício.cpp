#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 #include <string.h>
 
  /*
Exerc�cio 50 - Fa�a um programa que leia o valor da hora de trabalho (em reais) e o
n�mero de horas trabalhadas no m�s, e exiba na tela o valor a ser pago ao funcion�rio,
adicionando 10% sobre o valor calculado.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
  	
	float valorHora, horasTrabalhadas, valorReceber;

	
	printf("Digite o valor da hora de trabalho (em reais): ");
	scanf("%f", &valorHora);
	
	printf("Digite o n�mero de horas trabalhadas no m�s: ");
	scanf("%f", &horasTrabalhadas);
	 valorReceber = valorHora*horasTrabalhadas;
	 valorReceber = valorReceber+ (valorReceber*0.10);
	printf("O valor a receber � R$: %f ",valorReceber );
}


  
 

#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 45 - Receber o salário de um funcionário, exibir o valor deste salário, calcular
e mostrar seu novo salário, sabendo que ele recebeu um aumento de 25%.
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  float  salario, novoSalario,aumento;

  
  	printf("Digite salário antigo: ");
  	scanf("%f", &salario);
  	
  
  	aumento = (salario*25)/100;
  	novoSalario = aumento+salario;
    
    printf("\nO novo salário é: %f", novoSalario);
    
  
 }

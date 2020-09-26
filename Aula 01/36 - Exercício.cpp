#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*Exercicio 36
Escrever um algoritmo para determinar o consumo medio de um automovel, sendo
fornecido a distancia total percorrida (em km) pelo automovel e 
o total de combustivel gasto (em litros).
Lembrando que o consumo medio e dado pela formula:
consumoMedio = distanciaEmKm/consumoEmLitros
Atencao:
O Valor digitado nao pode ser zero ou negativo.
Se o valor digitado for menor ou igual a zero o algoritmo deve emitir a seguinte
mensagem de erro: Valores inconsistentes!. */

main (){
	
	setlocale(LC_ALL, "Portuguese");

	float distanciaEmKm,consumoMedio,consumoEmLitros;
	
		printf("Digite a distancia total percorrida (em km):  ");
		scanf("%f", &distanciaEmKm);
		
		printf("Digite o total de combustivel gasto (em litros): ");
		scanf("%f", &consumoEmLitros);
				
		if (consumoEmLitros>0 && distanciaEmKm>0){
			
		    consumoMedio = distanciaEmKm/consumoEmLitros;
			printf ("\n O consumo médio é: %.2f \n ", consumoMedio);	
				
		}else{
			
			printf("\n Valores inconsistentes! \n\n");				
		}		
		
	system("pause");
}

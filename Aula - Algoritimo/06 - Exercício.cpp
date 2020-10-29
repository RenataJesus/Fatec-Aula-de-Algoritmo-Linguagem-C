#include <stdio.h>
#include <stdlib.h>

//Ler dois números e exibir as seguintes mensagens:
//O números digitados foram ... e .... .
//A soma dos números ... e ... é ... .
//A subtração dos números ... e ... é ... .
//A multiplicação dos números ... e ... é ... .
//A divisão dos números ... e ... é ... .
//A média dos números ... e ... é ... .

main(){
	float numero1, numero2, soma, subtracao, multiplicacao, divisao, media;
	
	printf("Digite o primeiro numero: ");
	scanf ("%f", &numero1);
	
	printf("Digite o segundo numero: ");
	scanf ("%f", &numero2);
	
	printf("\n O numeros digitados foram %.2f e %.2f \n ", numero1, numero2);
	
	
	soma = numero1 + numero2;
	printf("\n A soma dos numeros %.2f e %.2f  eh %.2f \n", numero1, numero2, soma, "\n");
	
	subtracao = numero1 - numero2;
	printf("\n A subtracao dos numeros %.2f e %.2f  eh %.2f \n ", numero1, numero2, subtracao, "\n");
	
	multiplicacao = numero1 * numero2;
	printf("\n A multiplicacao dos numeros %.2f e %.2f  eh %.2f \n ", numero1, numero2, multiplicacao);
	
	divisao = numero1 / numero2;
	printf("\n A divisao dos numeros %.2f e %.2f  eh %.2f \n", numero1, numero2, divisao);
	
	media = (numero1 + numero2)/2;
	printf("\n A media dos numeros %.2f e %.2f  eh %.2f", numero1, numero2, media);
	
	
	
	system("pause");
}

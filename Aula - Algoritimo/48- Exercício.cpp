#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
  /*
 Exerc�cio 48- Uma empresa contrata um encanador a R$ 130,00 por dia. Crie um
programa que solicite o n�mero de dias trabalhados pelo encanador e imprima a
quantia l�quida que dever� ser paga, sabendo-se que s�o descontados 8% para imposto
de renda.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
 
  int diasTabalhados;
  float   totalLiquido, totalBruto, desconto;
  
  	printf ( " Digite quantos dias o encanador trabalhou: " );
  	scanf ( "%d", &diasTabalhados);
 
  	totalBruto = diasTabalhados*130;
  	totalLiquido =totalBruto - (totalBruto*0.08); 
    
    printf ( " \n O valor a receber � R$: %f " , totalLiquido);
    
  
 }

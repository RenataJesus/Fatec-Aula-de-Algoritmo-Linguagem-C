#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
  /*
 Exercício 48- Uma empresa contrata um encanador a R$ 130,00 por dia. Crie um
programa que solicite o número de dias trabalhados pelo encanador e imprima a
quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto
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
    
    printf ( " \n O valor a receber é R$: %f " , totalLiquido);
    
  
 }

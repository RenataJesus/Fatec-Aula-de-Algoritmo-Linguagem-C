#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Leia um n�mero inteiro de tr�s d�gitos e imprima um d�gito por linha.
Exemplo:
N�mero lido: 456
Sa�da: 
4
5
6
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, milhar, dezena, centena, unidade;
	
	printf("Informe o numero\n");
    scanf("%d",&numero);
    milhar=numero/1000;
    centena=numero/100-10*milhar;
    dezena=numero/10-100*milhar-10*centena;
    unidade=numero/1-1000*milhar-100*centena-10*dezena;
    printf("\n%d\n%d\n%d\n%d\n",milhar,centena,dezena,unidade);
   
		


}


 



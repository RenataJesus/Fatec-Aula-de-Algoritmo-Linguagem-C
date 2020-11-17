#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
 Ler tres numeros.
Exibir os tres numeros informando se eles sao positivos, negativos ou nulos.
Informar o maior numero.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  int  numero1, numero2, numero3;
  
  	printf("Digite o primeiro número: ");
  	scanf("%d", &numero1);
    
	printf("Digite o segundo número: ");
  	scanf("%d", &numero2);
	  
	printf("Digite o terceiro número: ");
  	scanf("%d", &numero3);
	    	
  	if((numero1>numero2) && (numero1>numero3)){
  		printf("O maior número é %d\n", numero1);
  		
	
  		
	  }else if((numero2>numero3) && (numero2>numero1)){
	  	
		printf("O maior número é %d\n", numero2);
	  	
	  }else if((numero3>numero2) && (numero3>numero1)){
	  	
		printf("O maior número é %d\n", numero3);
	  	
	  }
	  
	  if(numero1%2==0){
  		printf("O %d é par\n", numero1);
  	  }else if (numero1%2!=0) {
  	  	printf("O %d é ímpar\n", numero1);
		}else if(numero1<0){
		 printf("O %d é nulo\n", numero1);
		}
		
	  if(numero2%2==0){
  		printf("O %d é par\n", numero2);
  	  }else if (numero2%2!=0) {
  	  	printf("O %d é ímpar\n", numero2);
		}else if(numero2<0){
		 printf("O %d é nulo\n", numero2);
		}
	 if(numero3%2==0){
  		printf("O %d é par\n", numero3);
  	  }else if (numero3%2!=0) {
  	  	printf("O %d é ímpar\n", numero3);
		}else if(numero3<0){
		 printf("O %d é nulo\n", numero3);
		}
 }

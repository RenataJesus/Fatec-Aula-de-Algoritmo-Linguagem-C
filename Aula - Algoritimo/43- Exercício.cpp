#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 43 - Ler uma temperatura em graus Celsius e apresentá-la convertida em
graus Fahrenheit.
A fórmula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e
C a temperatura em Celsius.
 
 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 
  float  temperaturaC, temperaturaF;
  
  	printf("Digite uma temperatura em graus Celsius: ");
  	scanf("%f", &temperaturaC);
    
    temperaturaF = temperaturaC*(9.0/5.0)+32.0;
    printf("A temperatura em graus  Fahrenheit é: %f", temperaturaF);
	
 }

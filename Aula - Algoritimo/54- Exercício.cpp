#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 54 - Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em
graus Celsius.
A fórmula de conversão é: C = 5.0* (F – 32.0)=9.0, sendo C a temperatura em Celsius
e F a temperatura em Fahrenheit.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, fahrenheit;
	
	printf("Informe a temperatura em graus Fahrenheit\n");
    scanf("%f",&fahrenheit);
    celsius = 5.0/9*(fahrenheit - 32.0);
    printf("A Temperatura em celsius é: %f ºC\n",celsius);

}


 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 55 - Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus
Celsius. A fórmula de conversão é: C = K – 273.15, sendo C a temperatura em Celsius e K
a temperatura em Kelvin.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, kelvin;
	
	printf("Informe a temperatura em graus Kelvin\n");
    scanf("%f",&kelvin);
    if(kelvin>=0){
    	 celsius = kelvin - 273.15;
    printf("A Temperatura em celsius é: %f ºC\n",celsius);
	} else{
		printf("Temperatura não permitida");
	}
   

}


 



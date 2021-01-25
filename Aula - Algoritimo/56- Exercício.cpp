#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 56 - Ler uma temperatura em graus Celsius e apresentá-la convertida em graus
Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K
a temperatura em Kelvin.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, kelvin;
	
	printf("Informe a temperatura em graus Celsius\n");
    scanf("%f",&celsius);
    kelvin = celsius + 273.15;
    if(kelvin>=0){
    	printf("A Temperatura em kelvin é: %f ºK\n",kelvin);

	}else{
		printf("temperatura não existe");
	}
    
}


 



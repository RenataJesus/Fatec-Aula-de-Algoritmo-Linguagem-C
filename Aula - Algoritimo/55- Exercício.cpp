#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 55 - Ler uma temperatura em graus Kelvin e apresent�-la convertida em graus
Celsius. A f�rmula de convers�o �: C = K � 273.15, sendo C a temperatura em Celsius e K
a temperatura em Kelvin.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, kelvin;
	
	printf("Informe a temperatura em graus Kelvin\n");
    scanf("%f",&kelvin);
    if(kelvin>=0){
    	 celsius = kelvin - 273.15;
    printf("A Temperatura em celsius �: %f �C\n",celsius);
	} else{
		printf("Temperatura n�o permitida");
	}
   

}


 



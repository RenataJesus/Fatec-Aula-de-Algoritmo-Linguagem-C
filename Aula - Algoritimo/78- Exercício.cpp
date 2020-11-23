#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exercício 78
Faça um programa que some todos os números abaixo de 1000 que são múltiplos de 3
ou 5.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
		int multiploTres = 3;
		int multiploCinco = 5;
		int resultado = 0;

		for(int i = 0; i < 1000; i++){
		    if(i % multiploTres == 0 || i % multiploCinco == 0){
		        resultado += i;
		    }
		}
			    
			   
}

 



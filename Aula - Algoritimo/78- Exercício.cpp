#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
Exerc�cio 78
Fa�a um programa que some todos os n�meros abaixo de 1000 que s�o m�ltiplos de 3
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

 



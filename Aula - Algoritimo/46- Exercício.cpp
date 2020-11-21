#include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
  /*
Exercício 46 - Receber a altura do degrau de uma escada e a altura que o usuário deseja
alcançar subindo a escada. 
Calcular e mostrar quantos degraus o usuário deverá subir
para atingir seu objetivo, sem se preocupar com a altura do usuário..
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
 
 
  float   alturaDegrau, alturaSubida, quantidadeDegrau;

  
  	printf ( " Digite a altura do degrau: " );
  	scanf ( "%d", &alturaDegrau);
  	
  	printf ( "\nDigite a altura da subida: " );
  	scanf ( "%d", &alturaSubida);
  
  	quantidadeDegrau = alturaSubida/alturaDegrau  ;
  	
    
    printf ( " \n a quantidade de degraus a se subir é: :%d " , quantidadeDegrau);
    
  
 }

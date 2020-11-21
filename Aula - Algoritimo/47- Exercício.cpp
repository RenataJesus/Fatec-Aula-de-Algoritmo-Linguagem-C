
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
  /*
Exercício 47 - A importância de R$ 980.000,00 será dividida entre três ganhadores de
um concurso.
Sendo que da quantia total:
_ O primeiro ganhador receberá 46%;
_ O segundo receberá 32%;
_ O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
   
  float ganhador1, ganhador2, ganhador3;
  float valor= 980.000;
  
  	ganhador1 = valor*46/100;
  	ganhador2 = valor*32/100;
  	ganhador3 = valor*22/100;

 	printf("O valor do premio é: %f ", valor );
 	printf("\n \nO premio do primeiro lugar é: %f ", ganhador1 );
  	printf("\n \nO premio do segundo lugar é: %f ", ganhador2 );
	printf("\n \nO premio do terceiro lugar é: %f ", ganhador3 );		
  
 }



 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
  /*
Exerc�cio 47 - A import�ncia de R$ 980.000,00 ser� dividida entre tr�s ganhadores de
um concurso.
Sendo que da quantia total:
_ O primeiro ganhador receber� 46%;
_ O segundo receber� 32%;
_ O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.
 */
 
  
main(){
	setlocale(LC_ALL, "Portuguese");
   
  float ganhador1, ganhador2, ganhador3;
  float valor= 980.000;
  
  	ganhador1 = valor*46/100;
  	ganhador2 = valor*32/100;
  	ganhador3 = valor*22/100;

 	printf("O valor do premio �: %f ", valor );
 	printf("\n \nO premio do primeiro lugar �: %f ", ganhador1 );
  	printf("\n \nO premio do segundo lugar �: %f ", ganhador2 );
	printf("\n \nO premio do terceiro lugar �: %f ", ganhador3 );		
  
 }


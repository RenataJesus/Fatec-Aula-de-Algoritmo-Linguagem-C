#include<stdio.h>

 #include<stdlib.h>

 main(){
  int op;

 float n1, n2;

 printf("Digite :\n 1 - somar\n 2 - subtrair\n 3 - multiplicar\n 4 - dividir\n");

 scanf("%i", &op);


 switch(op){

 case 1:

 printf("digite o primeiro numero:");

 scanf("%f",&n1);

 printf("digite o segundo numero:");

 scanf("%f",&n2);

 printf("A soma foi %.2f.\n\n", (n1+n2));

 break;

 case 2:

 printf("digite o primeiro numero:");

 scanf("%f",&n1);

 printf("digite o segundo numero:");

 scanf("%f",&n2);

 printf("A subtracao foi %.2f.\n\n", (n1-n2));

 break;

 case 3:

 printf("digite o primeiro numero:");

 scanf("%f",&n1);

 printf("digite o segundo numero:");

 scanf("%f",&n2);

 printf("A multiplicacao foi %.2f.\n\n", (n1*n2));

 break;

 case 4:

 printf("digite o primeiro numero:");

 scanf("%f",&n1);

 printf("digite o segundo numero:");

 scanf("%f",&n2);


 if(n2 == 0){

 printf("ERRO");

 }else{

 printf("A divisao foi %.2f.\n\n", (n1/n2));

 }

 break;

 default:

 printf("valor indevido");


 }



 /*

 int mes = 7;



switch(mes){??

 case 1:

 printf("Janeiro\n");

 break;

 case 2:

 printf("Fevereiro\n");

 break;

 case 3:

 printf("marco\n");

 break;

 default:

 printf("outos\n");


 }??

 */

 /*

 if(mes == 1){??

 printf("Janeiro\n");

 }??else if(mes == 2){??

 printf("Fevereiro\n");

 }??else if(mes == 3){??

 printf("Marco\n");

 }??else{??

 printf("outros")

 }??

 */



 /*

 if(mes == 1 ){??

 printf("Janeiro\n");

 }??else{??

 if(mes == 2){??

 printf("Fevereiro\n");

 }??else{??

 if(mes == 3 ){??

 printf("marco\n");

 }??else{??

 printf("outros\n");

 }??

 }??

 }??

 */





system("pause");

 }
 

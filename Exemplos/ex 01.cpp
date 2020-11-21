#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");
 int n1, n2, aux, soma;
 printf("Digite um número: ");
 scanf("%d", n1);
 
 printf("Digite outro número: ");
 scanf("%d", n2);
 
 if (n1> n2){
 	aux=n1;
 	n1=n2;
 	n2=aux;
 }
 printf ("while--------------------");
 
 while(n1<=){
 	soma+=n1;
 	n1++;
 }
 
 printf ("A soma foi %i. \n", soma);
 
 }

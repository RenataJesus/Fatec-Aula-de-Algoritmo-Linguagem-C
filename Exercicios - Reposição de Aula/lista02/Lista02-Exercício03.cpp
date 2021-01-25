#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*
3. Escreva um algoritmo que leia dois valores booleanos (lógicos) e então, mostre se ambos
são VERDADEIROS ou FALSOS.
*/ 
 main(){
	setlocale(LC_ALL, "Portuguese");
	
	 float nota_final, frequencia;
   printf("Digite a nota final do aluno: ");
   scanf("%f", &nota_final);
   printf("Informe a frequencia do aluno: ");
   scanf("%f", &frequencia); 
   //se(nota_final > 6.0 && frequencia >= 75) 
   if (nota_final > 6.0 && frequencia >= 75 ) 
     printf("Aluno aprovado \n"); 
   else 
     printf("Aluno reprovado \n"); 
}

	


 



#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<locale.h>
 
 /*

 */ 
 main(){
	setlocale(LC_ALL, "Portuguese");

 
for(int n = 1; n<=100; n++){

 	if (n%2==0 && n% 3 == 0){
 	printf("%d ",n);
 	
 }

 }

system("pause");

 
}

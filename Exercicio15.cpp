#include <stdio.h>
#include <stdlib.h>

//15) Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a 
//soma desses n�meros. Encerre a execu��o quando um n�mero negativo for digitado.

main()

{
	int soma = 0; 
    int n;
    
    while (true) {
        
        printf("Digite numeros e 0 para parar ");
        scanf("%d", &n);
     
    if (n == 0){
         break;
           
        } 
    soma += n;
    }
   printf("A soma dos numeros deu %d", soma);
}

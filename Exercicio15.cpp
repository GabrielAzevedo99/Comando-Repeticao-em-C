#include <stdio.h>
#include <stdlib.h>

//15) Escreva um algoritmo que leia uma sequência de números do usuário e realize a 
//soma desses números. Encerre a execução quando um número negativo for digitado.

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

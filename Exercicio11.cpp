#include <stdio.h>
#include <stdlib.h>

//11) Escreva um algoritmo que leia 20 n�meros do usu�rio e exiba quantos n�meros s�o 
//maiores do que 8.

main()

{
	int menor = 0;
	int n;
    
            for ( int i = 1; i <= 20; i++) {
                
              printf("Digite um numero ");
              scanf("%d", &n);
              
              if (n > 8){
               menor++;
              }
    
}
            printf("%d numeros sao maiores que oito.", menor);
    }

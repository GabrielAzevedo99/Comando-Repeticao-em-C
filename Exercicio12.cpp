#include <stdio.h>
#include <stdlib.h>

//12) Escreva um algoritmo que leia 20 n�meros do usu�rio e exiba quantos n�meros s�o 
//pares

main()

{
	int soma = 0;
	int n;
    
            for ( int i = 1; i <= 20; i++) {
                
              printf("Digite um numero ");
              scanf("%d", &n);
              
              if (n % 2 == 0){    
             soma++;              
              
              } 
              
}
           printf("temos %d numeros pares", soma);
    }

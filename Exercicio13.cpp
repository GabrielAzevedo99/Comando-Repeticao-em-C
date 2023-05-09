#include <stdio.h>
#include <stdlib.h>

//13) Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 
//100.

main()

{
	int soma = 0;
	int n;
    
            for ( int i = 1; i <= 20; i++) {
                
            printf("Digite um numero ");
            scanf("%d", &n);
              
              if (n >= 0 && n <= 100){    
             soma++;              
              
              } 
              
}
            printf("temos %d numeros entre 0 e 100", soma);
    }

#include <stdio.h>
#include <stdlib.h>

//13) Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e 
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

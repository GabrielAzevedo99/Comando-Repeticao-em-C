#include <stdio.h>
#include <stdlib.h>

//7) Leia a idade de 20 pessoas e exiba a média das idades.

main()

{
	
int soma = 0;
int idade;
    
            for ( int i = 1; i <= 20; i++) {
               
              printf("Digite sua idade ");
              scanf("%d", &idade);
              
              soma += idade;
              
            }
     printf("A media das idades deu %d", soma / 20);
    }

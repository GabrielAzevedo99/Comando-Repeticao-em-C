#include <stdio.h>
#include <stdlib.h>

//2) Escreva um algoritmo que calcule a soma dos números de 1 a 15. 

main()
{

        int soma = 0;
        
        for (int i = 1; i <= 15; i++){
		
         printf("\n %d", i);
                
                soma += i;     
                
            }
            
            printf("\n A soma deu %d ", soma);
    }


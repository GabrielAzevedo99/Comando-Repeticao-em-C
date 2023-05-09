#include <stdio.h>
#include <stdlib.h>

//8) Leia a idade de 20 pessoas e exiba quantas pessoas são maiores de idade.

main()

{
	int idade;
	    int maior = 0;
    
            for ( int i = 1; i <= 20; i++) {
               
           printf("Digite sua idade ");
           scanf("%d", &idade);
       
              if (idade >= 18){ 
                 maior++;
                 
              }
    }
         printf("%d pessoas sao maiores de idade", maior);
}

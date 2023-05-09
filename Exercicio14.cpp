#include <stdio.h>
#include <stdlib.h>

//14) Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 
//100, quantos estão entre 101 e 200 e quantos são maiores de 200.

main()

{
	
	int soma = 0;
    int soma2 = 0;
    int soma3 = 0;
    int n;
    
            for ( int i = 1; i <= 20; i++) {
                
             printf("Digite um numero ");
             scanf("%d", &n);
              
              if (n >= 0 && n <= 100){    
             soma++;              
              } 
               if (n >= 101 && n <= 200){    
             soma2++;              
              } 
                if (n > 200){    
             soma3++;              
              } 
              
}
            printf("\n temos %d numeros entre 0 e 100", soma);
            printf("\n temos %d numeros entre 101 e 200", soma2);
            printf("\n temos %d acima de 200", soma3);
    }

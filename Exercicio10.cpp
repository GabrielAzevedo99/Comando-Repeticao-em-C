#include <stdio.h>
#include <stdlib.h>

/*10) Crie um algoritmo leia um número do usuário e exiba a sua tabuada de 
multiplicação.*/

main()

{
	int n;
	
	printf("Digite um numero ");
            scanf("%d", &n);
    
            for ( int i = 1; i <= 10; i++) {
              
            printf("\n %d x %d = %d", n, i, n * i);
            }
    }
    

#include <stdio.h>
#include <stdlib.h>

//5)  Escreva  um  algoritmo  que  leia  10  n�meros  do  usu�rio  e  calcule  a  soma  desses n�meros.

main()

{
	
	int n;
	int soma = 0;

            for ( int i = 1; i <= 10; i++) {
                
            printf( "\n Digite num ");
            scanf("%d", &n);
             
          soma += n;
}
           printf( "A soma dos numeros deu %d", soma);

        }

#include <stdio.h>
#include <stdlib.h>

//4)  Leia o nome um número do usuário um número N  e  escreva o nome dele na tela N vezes.

main()

{

     char nome [20];
     int x;

	printf("Digite seu nome ");
	scanf("%s", &nome);
	
	printf("Digite quantas vezes voce quer que apareca seu nome ");
	scanf("%d", &x);
	
	  for ( int i = 1; i <= x; i++) {
                
            printf( "\n %s", nome);
            
        }
        
    } 

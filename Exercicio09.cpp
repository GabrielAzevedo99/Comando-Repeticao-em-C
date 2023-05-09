#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

//9) Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova. 

main()

{
	
	int menor = INT_MAX;
    char nomeMenor [100] = "";
    char nome [20];
    int idade;
    
            for ( int i = 1; i <= 10; i++) {
                
              printf("Digite seu nome ");
              scanf("%s", &nome);
               
              printf("Digite sua idade ");
              scanf("%d", &idade);

            if (idade < menor) {
                menor = idade;
                strcpy (nomeMenor, nome);
            }
        }
        printf("Pessoa Mais nova Nome: %s Pessoa mais nova idade: %d", nomeMenor, menor);     
    }

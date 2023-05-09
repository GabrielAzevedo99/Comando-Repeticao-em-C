#include <stdio.h>
#include <stdlib.h>

//3) Leia o nome do usuário e escreva o nome dele na tela 10 vezes.

main()

{

     char nome [20];

	printf("Digite seu nome ");
	scanf("%s", &nome);
	
	for (int i = 0; i <= 10; i++){
	
	printf("\n %s", nome);
		
	}
}




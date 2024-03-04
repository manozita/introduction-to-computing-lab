//MMM24 - ano
//Manoela Martedi - 22/03/2023

#include <stdio.h>
#include <iostream>

main() {
	
	int ano;
	printf("Digite um ano de 1600 a 5000: ");
	scanf("%d", &ano);
	if (ano < 1600 || ano > 5000) {
		printf("Erro: numero invalido.\n");
		system("pause");
	}
	
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		printf("O ano %d eh bissexto.\n", ano);
	} else {
		printf("O ano %d nao eh bissexto.\n", ano);
	}
	
	system("pause");
	
}

 
	

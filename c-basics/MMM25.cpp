//MMM25 - 
//Manoela Martedi - 24/03/2023

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

main() {
	
	int mes, ano, dias;
	
	printf("Digite um mes e um ano de 1600 a 5000: ");
	scanf("%d %d", &mes, &ano);
	
	if (ano < 1600 || ano > 5000 || mes < 1 || mes > 12) {
		printf("Erro: valores invalidos.\n");
		exit(1);
	} 
	
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		dias = 30;
	} else if (mes == 2) {
		if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
			dias = 29;
		} else {
			dias = 28;
		}
	} else {
		dias = 31;
	}
	
	printf("O mes digitado tem %d dias.\n", dias);
}

 
	

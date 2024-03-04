//MMM18 - Indicar estacao do ano
//Manoela Martedi - 15/03/2023

#include <stdio.h>
#include <ctype.h> 

main() {
	
	char est;
	
	printf("Digite aqui uma estacao do ano: ");
	scanf("%c", &est);
	
	est = toupper(est);
	
	if (est == 'P') {
		printf("Primavera.\n");
	} else if (est == 'I') {
		printf("Inverno.\n");
	} else if (est == 'O') {
		printf("Outono.\n");
	} else if (est == 'V') {
		printf("Verao.\n");
	} else {
		printf("Valor invalido.");
	}
}
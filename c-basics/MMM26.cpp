//MMM26 - Indicar estacao do ano
//Manoela Martedi - 29/03/2023

#include <stdio.h>
#include <ctype.h> 

main() {
	
	char est;
	
	printf("Digite aqui uma estacao do ano (P,O,I,V): ");
	scanf("%c", &est);
	
	est = toupper(est);
	
	switch (est)
	{
		case 'P':
			printf("Primavera.\n");
			break;
		case 'I':
			printf("Inverno.\n");
			break;
		case 'O':
			printf("Outono.\n");
			break;
		case 'V':
			printf("Verao.\n");
			break;
		default:
			printf("Valor invalido.");
	}
}
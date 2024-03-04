//MMM27 - Indicar dias da semana
//Manoela Martedi - 29/03/2023

#include <stdio.h>

main() {
	
	int dia;
	
	printf("Digite aqui um dos 7 dias da semana (em numeral): ");
	scanf("%d", &dia);
	
	switch (dia)
	{
		case 2:
			printf("Segunda.\n");
			break;
		case 3:
			printf("Terca.\n");
			break;
		case 4:
			printf("Quarta.\n");
			break;
		case 5:
			printf("Quinta.\n");
			break;
		case 6:
			printf("Sexta.\n");
			break;
		case 7:
			printf("Sabado.\n");
			break;
		case 1:
			printf("Domingo.\n");
			break;
		default:
			printf("Valor invalido.");
	}
}
//MMM05 - Aritmetica com variaveis do tipo inteiro
//Manoela Macchion Martedi - 03/03/2023

#include <stdio.h>

main() {
	int x = 350;
	int y = 20;
	
	printf("Soma: %d + %d = %d.\n", x, y, x+y);
	printf("Subtracao: %d - %d = %d // %d - %d = %d\n", x, y, x-y, y, x, y-x);
	printf("Multiplicacao: %d x %d = %d\n", x, y, x*y);
	printf("Divisao: %d / %d = %d\n", x, y, x/y);
	printf("Resto da divisao: %d\n", x%y);

}
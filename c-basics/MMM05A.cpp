//MMM05A - Aritmetica com variaveis do tipo inteiro - ALTERADA
//Manoela Macchion Martedi - 03/03/2023

#include <stdio.h>

main() {
	int x, y, z;
	z = scanf("%d%d\n", &x, &y);
	
	if ((x+y) % 2 == 0) {
		printf("Media aritmetica entre %d e %d = %d\n", x, y, (x+y)/2);
	} else {
		printf("Media aritmetica entre %d e %d = %.2f\n", x, y, (x+y)/2.0);
	}
	printf("Numero de valores de entrada lidos: %d.", z);
}
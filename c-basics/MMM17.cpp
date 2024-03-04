//MMM17 - teste par ou impar
//Manoela Martedi - 15/03/2023

#include <stdio.h>

main() {
	int num;
	
	printf("Digite aqui um numero: ");
	scanf("%d", &num);
	
	if (num%2 == 0) {
		printf("O numero inserido eh par.\n");
	} else {
		printf("O numero inserido eh impar.\n");
	}
}
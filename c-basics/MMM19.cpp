//MMM19 - Calculo de divisao e resto
//Manoela Martedi - 15/03/2023

#include <stdio.h>
#include <ctype.h> 

main() {
	
	int dividendo, divisor, quociente, resto;
	
	printf("Digite aqui dois numeros inteiros, separados por espaco: ");
	scanf("%d %d", &dividendo, &divisor);
	
	if (divisor == 0) {
		printf("ERRO: Nao existe divisao por zero!\n");
	} else {
		quociente = dividendo / divisor;
		resto = dividendo % divisor;
		
		printf("A divisao de %d por %d eh: %d com resto %d.\n", dividendo, divisor, quociente, resto);
	}
}
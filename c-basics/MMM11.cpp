//MMM11 - Entrada de numero ponto-flutuante pelo teclado
//Manoela Macchion Martedi - 10/03/2023

#include <stdio.h>

main(){
	
	float altura, peso;
	printf("Escreva aqui sua altura: ");
	scanf("%f", &altura);
	if (!scanf("&f", &altura)) {
		printf("A altura deve ser um numero.\n");
		return 1;
	} else {
		
	}
	
	printf("Escreva aqui seu peso: ");
	scanf("%f", &peso);
	if (!scanf("&f", &peso)) {
		printf("O peso deve ser um numero.\n");
		return 1;
	}
	
	printf("Voce pesa %.2fkg e sua altura eh %.2fm.\n", peso, altura);
	return 0;
}
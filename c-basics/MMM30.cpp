//MMM30 - Indicar estacao do ano
//Manoela Martedi - 31/03/2023

#include <stdio.h>
#include <ctype.h> 
#include <iostream>

main() {
	
	float diametroC, areaC, circC, pi, raioC;
	pi = 3.1416;
	
	printf("Digite o diametro do circulo, em metros: ");
	scanf("%f", &diametroC);
	
	if (diametroC <= 0){
		printf("Erro: numero invalido.\n");
		exit(0);
	}
	
	raioC = diametroC/2;
	areaC = pi*raioC*raioC;
	circC = 2*pi*raioC;
	
	printf("A area do circulo de diametro %.4fm e: %.4fm. A circunferencia e de: %.4fm.\n", diametroC, areaC, circC);
	
}
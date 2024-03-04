//MMM21 - comparar 2 numeros inteiros
//Manoela Martedi - 22/03/2023

#include <stdio.h>
#include <iostream>

main() {

	int elementos;
	int maior, menor;
	int i, j = 0;
	
	printf("Digite o numero de valores da comparacao: ");
	scanf("%d", &elementos);
	
	int numeros[elementos];
	
	printf("Digite %d valores inteiros, separados por espaco: ", elementos);
	
	for (i = 0; i < elementos; i++) {
		if (scanf("%d", &numeros[i]) == false) {
			
			printf("Erro de valor.\n");
			system("pause");
			
		}
	}
	
	maior = numeros[0];
	menor = numeros[0];
	
	for (j = 0; j < elementos; j++) {
		
		if (numeros[j] > maior)
		{
			maior = numeros[j];
		}
		
		if (numeros[j] < menor)
		{
			menor = numeros[j];
		}
		
	}
	
	printf("O maior numero digitado foi: %d e o menor %d.\n", maior, menor);
}

//MMM21 - comparar 2 numeros inteiros
//Manoela Martedi - 17/03/2023

#include <stdio.h>
#include <iostream>

main() {
	
	int n1, n2;
	
	printf("Digite dois valores inteiros, separados por espaco: ");
	scanf("%d %d", &n1, &n2);
	
	if (n1 > n2)
		{
		printf("O numero %d eh maior do que o numero %d.\n", n1, n2);
		}
	else if (n1 < n2) 
		{
		printf("O numero %d eh maior do que o numero %d.\n", n2, n1);
		}
	else
		{
		printf("Os numeros sao iguais (%d).", n1);
		}
}

 
	

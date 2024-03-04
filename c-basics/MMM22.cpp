//MMM22 - comparar 2 numeros inteiros
//Manoela Martedi - 22/03/2023

#include <stdio.h>
#include <iostream>

main() {
	
	int n1, n2, n3, n4, n5;
	int maior, menor;
	
	printf("Digite cinco valores inteiros, separados por espaco: ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	maior = n1;
	menor = n2;
	
	if (n2 > n1)
	{
		maior = n2;
		menor = n1;
	}
	if (n3 > maior)
	{
		maior = n3;
	}
	if (n4 > maior)
	{
		maior = n4;
	}
	if (n5 > maior)
	{
		maior = n5;
	}
	if (menor > n3)
	{
		menor = n3;
	}
	if (menor > n4)
	{
		menor = n4;
	}
	if (menor > n5)
	{
		menor = n5;
	}
	
	printf("O maior numero inteiro digitado e %d.\n", maior);
	printf("O menor numero inteiro digitado e %d.\n", menor);
	
}

 
	

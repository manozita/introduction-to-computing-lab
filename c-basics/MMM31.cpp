//MMM31 - teste de divisibilidade
//Manoela Martedi - 31/03/2023

#include <iostream>

main() {
	
	int num1, num2, divisao, resto;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &num1, &num2);
	
	if (num2 == 0) {
		printf("Nao existe divisao por zero!\n");
		exit(0);
	}
	
	divisao = num1/num2;
	resto = num1%num2;
	
	if (resto == 0) 
		{
		printf("O numero %d e divisivel por %d, com resultado %d, ", num1, num2, divisao);
		if (divisao%2 == 0)
			printf("sendo ele um numero par.\n");
		else
			printf("sendo ele um numero impar.\n");
		}
		 
	else 
		{
			
		printf("A divisao entre %d e %d, eh %d, com resto %d, ", num1, num2, divisao, resto);
		if (resto%3 == 0)
			printf("que e divisivel por 3");
		else
			printf("que nao e divisivel por 3");
			
		}
	
}
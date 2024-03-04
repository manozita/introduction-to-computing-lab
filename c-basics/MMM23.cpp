//MMM23 - calculadora
//Manoela Martedi - 22/03/2023

#include <stdio.h>
#include <iostream>

main() {
	
	int x, y, result;
	char op;
	printf("Digite dois numeros separados pelo simbolo da operacao desejada: ");
	scanf("%d %c %d", &x, &op, &y);
	
	if ((op == '/' || op == '%') && y == 0) { //error check 1
		printf("Erro: nao ha operacao de divisao por zero.\n");
		system("pause");
	}
	
	if (op == '+')
	{
		result = x+y;
	}
	else if (op == '*')
	{
		result = x*y;
	}
	else if (op == '-')
	{
		result = x-y;
	}
	else if (op == '/')
	{
		result = x/y;
	}
	else if (op == '%')
	{
		result = x%y;
	} else {
		printf("Erro: operacao nao reconhecida.\n");
		system("pause");
	}
	
	printf("Resultado de %d %c %d = %d.\n", x, op, y, result);
	
}

 
	

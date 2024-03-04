//MMM20 - divisao de uma heranca
//Manoela Martedi - 17/03/2023
//Dividir o valor monetario de uma heranca entre uma quantidade definida de herdeiros.
//Quanto leva cada herdeiro? O que acontece se digitarmos 0 herdeiros? Como prevenir isso? E se os números digitados forem negativos?
//Lembre-se: nao existe valor inferior ao centavo, e nao existe fracao de quantidade de herdeiros.

#include <stdio.h>
#include <iostream>

main() {
	
	int herdeiros;
	float heranca;
	
	printf("Digite o valor de uma heranca, em real: ");
	scanf("%f", &heranca);
	
	if (heranca < 0)
		{
		printf("Erro: o valor da heranca nao pode ser negativo.\n");
		system("pause");
		}
	
	printf("Digite o valor de herdeiros para sua heranca de R$%.2f: ", heranca);
	scanf("%d", &herdeiros);
	
	if (herdeiros <= 0)
		{
		printf("Erro: digite um numero natural inteiro.\n");
		system("pause");
		}
	
	printf("A heranca de %.2f, para %d herdeiros eh de %.2f.\n", heranca, herdeiros, heranca/herdeiros);
	system("pause");
	
}

 
	

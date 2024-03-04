//MMM08 - Operações com variáveis do tipo float
//Manoela Martedi - 08/03/2023

#include <stdio.h>
#include <iostream>

main(){
	
	float a1, a2;
	a1 = 245.79;
	a2 = 14.613847;
	
	printf("A soma de %.3f e %.3f seria, aproximadamente, %.3f.\n", a1, a2, a1+a2);
	printf("A multiplicacao de %.3f e %.3f seria, aproximadamente, %.3f.\n", a1, a2, a1*a2);
	printf("A divisao entre %.3f e %.3f seria, aproximadamente, %.3f.\n", a1, a2, a1/a2);
	
	//Em divisões entre números flutuantes não há resto!
	printf("\n");
	system("pause");
}
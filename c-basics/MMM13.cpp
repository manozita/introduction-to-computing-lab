//MMM13 - entrada de 3 números flutuantes;
//Manoela Macchion Martedi - 10/03/2023;
//Apresentar os numeros com apenas 2 casas decimais;
//	caso 1: separados por tabulacao;
//	caso 2: encolunados com o ponto decimal alinhado e com a soma calculada;
//	caso 3: idem com 5 casas decimais;

#include <stdio.h>
#include <iostream>

main(){
	
	float n1, n2, n3;
	
	printf("Digite 3 numeros flutuantes, separados por espaco: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("Somando");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".");
	sleep(1);
	printf(".\n");
	
	sleep(1);
	
	printf("%15.2f\n%15.2f\n%15.2f\n------------\n%15.2f\n", n1, n2, n3, n1+n2+n3);
	printf("Resultado com 5 casas decimais: %.5f\n", n1+n2+n3);

}
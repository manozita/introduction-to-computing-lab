//MMM09 - Calculando notas de aluno
//Manoela Martedi - 08/03/2023

#include <stdio.h>
#include <iostream>

main(){
	
	float n1, n2, n3, media;
	n1 = 6.8;
	n2 = 9.3;
	n3 = 7.7;
	media = (n1 + n2 + n3)/3.0;
	
	//primeiro caso: sem edicao de casas decimais
	printf("Media aritmetica 1 = %f\n", media);
	
	
	//segundo caso: com 1 e 3 casas decimais
	printf("Media aritmetica 2 = %.1f\n \t ou \t \nMedia aritmetica 2 = %.3f\n", media, media);
	
	//terceiro caso: com 0 casas decimais, numero arredondado
	printf("Media aritmetica 3 = %.0f\n", media);
	
	printf("\n");
	system("pause");
}
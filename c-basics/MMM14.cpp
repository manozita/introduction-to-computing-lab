//MMM14 - Teste de precisao numerica
//Manoela Macchion Martedi - 10/03/2023

#include <stdio.h>

main(){
	
	float num, num3, soma3;
	//num = 1/3.0;
	
	//num = 0.333333; //6 casas decimais
	num = 0.3333333; //7 casas decimais
	
	num3 = 3*num;
	soma3 = num + num + num;
	
	printf("num = %.3f\n", num);
	
	printf("3 x num = %.3f\n", num3);
	
	printf("num + num + num = %.3f\n", soma3);
	
}
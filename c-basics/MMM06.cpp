//MMM06 - Area e perimetro do retangulo
//Manoela Macchion Martedi - 03/03/23

#include <stdio.h>

main () {
	int lado1, lado2, perimetro, area;
	lado1 = 45;
	lado2 = 379;
	perimetro = 2*(lado1 + lado2);
	area = lado1 * lado2;
	printf("Em um quadrilatero de %dm por %dm, temos:\n", lado1, lado2);
	printf("Perimetro = %d\n", perimetro);
	printf("Area = %d\n", area);

}
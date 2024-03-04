//MMM29 - Calculo da divisao e resto - SEMEDICAO
//Manoela Martedi - 29/03/2023

#include <stdio.h>

main() {int dividendo, divisor;printf("Digite aqui um dividendo e um divisor: ");scanf("%d %d", &dividendo, &divisor);switch (divisor) {case 0: printf("Nao existe divisao por 0.\n");break;default:printf("O resultado da divisao de %d por %d e: %d, com resto %d.\n", dividendo, divisor, dividendo/divisor, dividendo%divisor);}}
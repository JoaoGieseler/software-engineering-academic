// Um motorista quer saber o consumo do carro na viagem. O programa deve ler a distância percorrida em km e a quantidade de litros abastecidos
// Mostre quantos km o carro fez por litro, com duas casas decimais. Desenvolva um programa em C para resolver esse problema. 

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	float KmPercorridos, LitrosAbastecidos, KmPorLitro;
	
	printf("=== CENTRAL MULTIMIDIA ===\n");
	printf("Insira o tamanho do percurso em km: ");
	scanf("%f", &KmPercorridos);
	
	printf("Insira a quantidade de litros de combustivel abastecido: ");
	scanf("%f", &LitrosAbastecidos);
	
	KmPorLitro = KmPercorridos / LitrosAbastecidos;
	
	printf("\n=== RESULTADO ===\n");
	printf("Km por litro: %.2f", KmPorLitro);
	
	return 0;
}
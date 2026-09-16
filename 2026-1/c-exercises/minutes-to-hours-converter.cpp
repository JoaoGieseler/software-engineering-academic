// O sistema de uma operadora registra a duração das ligações em minutos. O programa deve ler o total de minutos de uma ligação e mostrar essa duração em horas e minutos.
// Exemplo: 130 minutos viram 2 horas e 10 minutos. Dica: pense na divisão inteira e no resto da divisão. Desenvolva um programa em C para resolver esse problema.

#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int MinutosTotais, Horas, MinutosRestantes;
	
	printf("Digite a duracao da ligacao em minutos: ");
	scanf("%i", &MinutosTotais);
	
	Horas = MinutosTotais / 60;
	MinutosRestantes = MinutosTotais % 60;
	
	printf("\n=== DURACAO DA LIGACAO ===\n");
	printf("%i minutos equivalem a %i horas e %i minutos.\n", MinutosTotais, Horas, MinutosRestantes);
	
	return 0;
}
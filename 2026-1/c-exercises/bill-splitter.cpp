// Um grupo de amigos jantou num restaurante e vai dividir a conta em partes iguais.
// O programa deve ler o valor total da conta e o número de pessoas.
// Mostrar quanto cada um deve pagar, com duas casas decimais.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int TotalPessoas;
	float ValorTotalConta, ValorPorPessoa;
	
	printf("Insira a quantidade de pessoas presentes: ");
	scanf("%i", &TotalPessoas);
	
	printf("Insira o valor total da conta: ");
	scanf("%f", &ValorTotalConta);
	
	ValorPorPessoa = ValorTotalConta / TotalPessoas;
	
	printf("\n=== RESULTADO ===\n");
	printf("VALOR TOTAL: R$ %.2f\n", ValorTotalConta);
	printf("O valor por pessoa sera de: R$ %.2f\n", ValorPorPessoa);
	
	return 0;
}
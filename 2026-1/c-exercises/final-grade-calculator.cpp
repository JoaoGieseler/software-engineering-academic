// Uma professora registra duas notas de prova por aluno.
// O programa deve ler as duas notas e mostrar a soma e a média, com duas casas decimais.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float Nota1, Nota2, Soma, Media;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &Nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &Nota2);
    
    Soma = Nota1 + Nota2;
    Media = Soma / 2;

    printf("\n=== BOLETIM ===\n");
    printf("Nota 1: %.1f\n", Nota1);
	printf("Nota 2: %.1f\n", Nota2);
	printf("MEDIA FINAL: %.1f\n", Media);

    return 0;
}
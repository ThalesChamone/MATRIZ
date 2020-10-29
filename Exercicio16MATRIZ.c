/*Ler 2 vetores A e B de 5 elementos. Construir uma matriz C, onde a primeira
linha contenha os elementos de A e a segunda linha contenha os elementos
de B.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int vetorA[5], vetorB[5], v, j;
int matrizC[2][5], i;

int main() {

	setlocale(LC_ALL, "Portuguese");
	for (v = 0; v < 5; v++)
	{
		printf("Digite valores vetor A: ");
		scanf_s("%i", &vetorA[v]);
	}

	for (v = 0; v < 5; v++)
	{
		printf("Digite valores vetor B: ");
		scanf_s("%i", &vetorB[v]);
	}

	for (j = 0; j < 5; j++) 
		{
			matrizC[0][j] = vetorA[j];
			matrizC[1][j] = vetorB[j];
			
		}

	
	for (i = 0; i < 2; i++)
		for (j = 0; j < 5; j++)
		{
			printf("\nValor na linha %i e coluna %i é: %i", i, j, matrizC[i][j]);
		}
}
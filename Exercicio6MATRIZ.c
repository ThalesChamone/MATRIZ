/*Ler 2 matrizes A e B de 5 linhas e 3 colunas, construir uma matriz C, onde
cada elemento de C seja a soma dos elementos correspondente em A com B.*/

#include <stdio.h>
#include <conio.h>

int matrizA[5][3] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
int matrizB[5][3] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
int matrizC[5][3], i, j, k, l;

int main() {

	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}

	printf("Soma matrizes: \n");

	for (k = 0; k < 5; k++) 
	{
		for (l = 0; l < 3; l++) 
		{
			printf("\t %i \n", matrizC[k][l]);
		}
	}
}
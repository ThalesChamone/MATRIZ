/*Faça um algoritmo que lê 2 matrizes A e B de 2 linhas e 4 colunas. Em
seguida, construa uma matriz C onde cada elemento de C é o maior valor
entre os elementos correspondentes em A e B.*/

#include <stdio.h>
#include <conio.h>

int matrizA[2][4] = { 5,6,7,8,55,10,74,12 }, matrizB[2][4] = { 21,22,8,124,25,26,44,28 };
int matrizC[2][4], i, j;

int main() {

	
	for (i = 0; i < 2; i++) 
	{
		for (j = 0; j < 4; j++) 
		{
			if (matrizA[i][j] > matrizB[i][j]) 
			{
				matrizC[i][j] = matrizA[i][j];
			}
			else 
			{
				matrizC[i][j] = matrizB[i][j];
			}

			printf("\nMatriz C [%i][%i] : %i",i, j, matrizC[i][j]);
		}
	}
	
}


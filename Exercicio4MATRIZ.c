/*Elabore um algoritmo que leia uma matriz 3x4 de inteiros, calcule quantos
elementos da matriz são positivos e, em seguida, construa uma segunda
matriz apenas com os elementos positivos. No lugar dos números negativos da segunda matriz coloque o número zero. 
No final, imprima a quantidade de números positivos e a segunda matriz.*/


#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[3][4], i, j, positivo = 0;

int main() {

	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("\nValor matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);

			
		}
		
	}
	for (i = 0; i < 3; i++) 
		for (j = 0; j < 4; j++) 
		{
			if (matriz[i][j] < 0)
			{
				matriz[i][j] = 0;
			}
			if (matriz[i][j] >= 0)
			{
				positivo++;
				printf("\nMatriz C: %i", matriz[i][j]);
			}
		}
	
	
	printf("\nQuantidade nº positivos na matriz: %i\n", positivo);

}


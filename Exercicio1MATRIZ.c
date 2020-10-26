/*Construir um algoritmo que receba uma matriz 2x4 de números reais e
imprima na tela os números digitados.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[2][4], i, j;

int main() {
	for(i=0;i<2;i++)
		for (j = 0; j < 4; j++) 
		{
			printf("Digite elementos matriz [%i][%i]: ", i, j);
			scanf_s("%i", &matriz[i][j]);

		}

	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++) 
		{
			printf("\n[%i][%i] = %i",i,j, matriz[i][j]);
		}

}
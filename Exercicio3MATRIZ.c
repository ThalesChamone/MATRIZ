/*Elabore um algoritmo que leia uma matriz 3x3 de números reais e calcule a
média dos valores de cada linha da matriz.*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int matriz[3][3], i, j;
float soma = 0, media[3] = { 0,0,0 };

int main() {

	setlocale(LC_ALL, "Portuguese");
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			printf("Digite os valores da matriz linha %i  coluna %i: ", i, j);
			scanf_s("%d", &matriz[i][j]);
			media[i] += matriz[i][j];
		}

		media[i] = media[i] / 3;
	}

	

	for (i = 0; i < 3; i++) 
	{
		printf("\nMedia da linha %i é: %.2f", i,media[i]);
	}


}



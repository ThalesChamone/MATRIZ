/*Utilizando uma matriz 3x3 construa um algoritmo que preencha a matriz e:
a. Mostre os elementos da diagonal principal (linha = coluna)
b. Calcule a média dos elementos da matriz;
c. Calcule quantos valores da matriz estão acima da média calculada.*/

#include <stdio.h>
#include <conio.h>

int matriz[3][3], i, j, acima = 0;
float media,soma=0;

int main() {
	for(i=0;i<3;i++)
		for (j = 0; j < 3; j++) 
		{
			printf("Entre com elementos da matriz [%i][%i]: ",i, j);
			scanf_s("%i", &matriz[i][j]);
			soma += matriz[i][j];
		}
	media = soma / 9;

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) 
		{
			if (matriz[i][j] > media) 
			{
				acima++;
			}
		}
	

	printf("\nMedia elementos matriz: %.2f  \n", media);
	printf("\nValores matriz acima da media: %i\n", acima);
}
//O arquivo de entrada cont�m dois valores: um valor inteiro X representando a dist�ncia total percorrida (em Km), 
//e um valor real Y representando o total de combust�vel gasto, com um d�gito ap�s o ponto decimal.

#include <stdlib.h>
#include <stdio.h>

int main () {
	int X;
	float Y, combustivel_gasto;
	
	printf("Digite a distancia total percorrida: \n");
	scanf("%i", &X);
	printf("Digite o total de combustivel gasto: \n");
	scanf("%f", &Y);
	
	combustivel_gasto = X / Y;
	
	printf("%.3f", combustivel_gasto);
	
		return 0;
}


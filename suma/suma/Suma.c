#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num1, num2, suma, producto;
	printf("Introduzca un numero\n");
		scanf("%d", &num1);
		printf("Introduzca otro numero\n");
	scanf("%d", &num2);
	suma = num1 + num2;
	producto = num1 * num2;

	printf("La suma vale: %d\n", suma);
	printf("El producto vale: %d\n", producto);
		system("pause");
	return(0);

}
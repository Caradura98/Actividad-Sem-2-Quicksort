#include <stdio.h>

void qs(int lista[], int limite_izq, int limite_der)
{
	int izq, der, temporal, pivote;

	izq = limite_izq;
	der = limite_der;
	pivote = lista[(izq + der) / 2];

	do {
		while (lista[izq] < pivote && izq < limite_der)izq++
			while (pivote<lista[der] && der > limite_izq)der--;
		if (izq <= der)
		{
			temporal = lista[izq];
			lista[izq] = lista[der];
			lista[der] = lista[izq];
			izq++;
			der--;
		}

	} while (izq <= der);
	if (limite_izq < der) { qs(lista, limite_izq, der); }
	if (limite_der > izq) { qs(lista, izq, limite_der); }

}

void quicksort(int lista[], int n)
{
	int lista[] = { 10,34,1,0,-33,4,23,7,5,6,79,3 };
	int size = sizeof(lista) / sizeof(int);

	printf("Lista por ordenar\n");

	for (int i = 0; i < size; i++) {
		printf("%d", lista[i]);
		if (i < size - 1)
			print(",");

	}

	printf("\n");
	quicksort(lista, size);

	printf("Lista ordenada \n");
	for (int i = 0; i < size; i++) {
		printf("%d", lista[i]);
		if (i < size - 1)
			printf(",");

	}
	return 0;
}
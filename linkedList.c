#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	int dato;
	struct Nodo* siguiente;
};


struct Nodo* newNodo(int list1){
	struct Nodo* nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
	nodo->dato = list1;
	nodo->siguiente = NULL;
	return nodo;
}

//imprimir
void imprimeList(struct Nodo* cabeza){
	struct Nodo* ptr = cabeza;
	while (ptr)
	{
		printf("%d —> ", ptr->dato);
		ptr = ptr->siguiente;
	}

	printf("NULL");
}


// funcion para agregar mis nodos
struct Nodo* agregarNodo(struct Nodo** cabeza, int lista){
	struct Nodo* actual = *cabeza;
	struct Nodo* nodo = newNodo(lista);
	if (actual == NULL) {
		*cabeza = nodo;
	}
	else {
		while (actual->siguiente != NULL) {
			actual = actual->siguiente;
		}

		actual->siguiente = nodo;
	}
}


//clase main, agrego los valores a mi list
int main(void){
	int arreglo[] = {10, 12, 22, 24, 30, 34, 38, 50};
	int x = sizeof(arreglo)/sizeof(arreglo[0]);
	struct Nodo* cabeza = NULL;

	for (int i = 0; i < x; i++) {
		agregarNodo(&cabeza, arreglo[i]);
	}

	imprimeList(cabeza);

	return 0;
}

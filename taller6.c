#include <stdio.h>

void desglosarFecha(char *fecha);
void intercambio(int *a, int *b);
int * direccionElemento(int *enteros, int elemento, int tamano);

int main(int argc, char **argv) {
	int a = 8;
	int b = 7;
	intercambio(&a,&b);
	printf("Funcion 1\n");
	char *fecha = "2017-06-08";
	desglosarFecha(fecha);
	printf("Funcion 2\n");
	int arreglo[3] = {1,2,3};
	int num = 2;
	int t = 3;
	int* puntero = direccionElemento(arreglo,num,t);
	printf("Direccion del elemento %p\n", puntero);
	printf("Funcion 3\n");
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}

void desglosarFecha(char *fecha) {
	printf("Dia: %.*s\n",2,fecha+8);
	printf("Mes: %.*s\n",2,fecha+5);
	printf("Año: %.*s\n",4,fecha);
}

int * direccionElemento(int *enteros, int elemento, int tamano) {
	int i;
	int *direccion = NULL;
	for(i=0;i<tamano;i++){
		if (*enteros==elemento){
			*direccion = *enteros;
		}
	}
	return *direccion;
}

void intercambio(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

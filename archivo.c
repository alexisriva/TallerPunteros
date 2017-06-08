int * direccionElemento(int *enteros, int elemento, int tamano){
	int i;
	int *direccion;
	for(i=0;i<tamano;i++){
		if (*enteros==elemento){
			*direccion = *enteros;
		}
	}
	return *direccion;
}

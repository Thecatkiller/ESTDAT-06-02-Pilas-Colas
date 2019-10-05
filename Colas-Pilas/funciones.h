bool estaVacia(int tope) {
	if (tope == 0) return true;
	else return false;
}

bool estaLlena(int tope, int limite) {
	if (tope == limite) return true;
	else return false;
}

void enColar(int &tope, int limite, Trabajador dato, Trabajador cola[]) {
	if (!estaLlena(tope, limite))
		cola[tope++] = dato;
}
Trabajador desenColar(int &tope, Trabajador cola[]) {
	Trabajador t = cola[0];
	if (!estaVacia(tope)) {
		for (int i = 0; i < tope - 1; i++)
			cola[i] = cola[i + 1];
		tope--;
	}
	return t;
}

void eliminarColaEnIndice(int &tope,int limite, int indice, Trabajador cola[]) {
	if (!estaVacia(tope)) {
		int ta = 0;
		Trabajador Ca[50];

		while (!estaVacia(tope))
		{
			Trabajador ex = desenColar(tope, cola);
			if (tope != indice)
				enColar(ta, limite, ex, Ca);
		}

		while (!estaVacia(ta))
		{
			Trabajador ex = desenColar(ta, Ca);
			enColar(tope, limite, ex, cola);
		}
		//tope--;
	}
}



int CalcularEdad(Fecha fn) {
	return -1;
}
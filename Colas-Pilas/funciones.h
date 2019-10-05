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
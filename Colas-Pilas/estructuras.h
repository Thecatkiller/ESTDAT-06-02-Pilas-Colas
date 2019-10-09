struct Fecha {
	int dia, mes, año;
};

struct Trabajador {
	char dni[10], nombresCompletos[100];
	double sueldo;
	// 0 mujer  1 hombre 2 otros
	int genero; 
	Fecha fn;
};


Trabajador Cola[50];
Trabajador Pila[50];
int tope = 0;
int limite = 5;
int topePila = 0;

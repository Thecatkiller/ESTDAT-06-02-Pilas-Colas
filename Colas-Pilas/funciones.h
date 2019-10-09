using namespace std;
#include <string>
using namespace System;
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

void apilar(int &tope, int limite, Trabajador dato, Trabajador Cola[]) {
	if (!estaLlena(tope, limite)) {
		Cola[tope] = dato;
		tope++;
	}
}
Trabajador desapilar(int &tope, Trabajador Pila[]) {
	Trabajador Ex = Pila[tope - 1];
	if (!estaVacia(tope))tope--;
	return Ex;
}

bool buscarPila(int tope, int limite, Trabajador Pilas[], char *dni) {
	bool Ex = false;
	int ta = 0; Trabajador Pa[50];
	while (!estaVacia(tope))
	{
		Trabajador aux = desapilar(tope, Pilas);
		if (strcmp(aux.dni, dni) == 0)Ex = true;
		apilar(ta, limite, aux, Pa);
	}
	while (!estaVacia(ta))
	{
		Trabajador aux = desapilar(ta, Pa);
		apilar(tope, limite, aux, Pilas);
	}
	return Ex;
}

bool buscarCola(int tope, int limite, Trabajador cola[], char *dni) {
	bool Ex = false;
	int ta = 0; Trabajador Pa[50];
	while (!estaVacia(tope))
	{
		Trabajador aux = desenColar(tope, cola);
		if (strcmp(aux.dni, dni) == 0)Ex = true;
		enColar(ta, limite, aux, Pa);
	}
	while (!estaVacia(ta))
	{
		Trabajador aux = desenColar(ta, Pa);
		enColar(tope, limite, aux, cola);
	}
	return Ex;
}

void eliminarPila(int &tope, int limite, Trabajador Pilas[], char *dni) {
	if (buscarPila(tope, limite, Pilas, dni)) {
		int ta = 0; Trabajador Pa[50];
		while (!estaVacia(tope))
		{
			Trabajador aux = desapilar(tope, Pilas);
			if (strcmp(aux.dni, dni) != 0)apilar(ta, limite, aux, Pa);
		}
		while (!estaVacia(ta))
		{
			Trabajador aux = desapilar(ta, Pa);
			apilar(tope, limite, aux, Pilas);
		}
	}
}

void eliminarCola(int &tope, int limite, Trabajador cola[], char *dni) {
	if (buscarCola(tope, limite, cola, dni)) {
		int ta = 0; Trabajador Pa[50];
		while (!estaVacia(tope))
		{
			Trabajador aux = desenColar(tope, cola);
			if (strcmp(aux.dni, dni) != 0)enColar(ta, limite, aux, Pa);
		}
		while (!estaVacia(ta))
		{
			Trabajador aux = desenColar(ta, Pa);
			enColar(tope, limite, aux, cola);
		}
	}
}



int CalcularEdad(Fecha fn) {
	int edad = 0;
	DateTime FechaActual = DateTime::UtcNow;
	DateTime FechaNacimiento = DateTime(fn.año, fn.mes, fn.dia);

	edad = DateTime(FechaActual.Ticks - FechaNacimiento.Ticks).Year - 1;

	return edad;
}

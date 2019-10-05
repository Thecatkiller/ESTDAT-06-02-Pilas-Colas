#include "estructuras.h"
#include "funciones.h"

#include "frmColas.h"
#include "frmPilas.h"

#include "frmPrincipal.h"

using namespace ColasPilas;
void main() {
	Application::EnableVisualStyles();
	Application::Run(gcnew frmPrincipal);
}


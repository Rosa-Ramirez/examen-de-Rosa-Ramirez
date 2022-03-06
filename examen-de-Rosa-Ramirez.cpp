#include <iostream>

using namespace std;

int factorial(int);
int tabla(int a);

int main()
{
	int clave, container = 0, accion, contador_par = 0, contador_impar = 0, prom = 0, sumapar, sumaimpar, dia, a;
	
	cout << "---------- Parcial de Programacion ----------" << endl;
	cout << "Hola, para poder ingresar al sistema debe ingresar la clave correctamente." << endl;
	
	while (clave != 123456)
	{
		cout << "Ingrese la clave: ";
		cin >> clave;
		
		container = container + 1;
		if (container == 3)
		{
		
		cout << "\nLo siento, usted ha ingresado la clave incorrecta en 3 oportunidades, su ingreso no es permitido." << endl;
		break;
		}

	}
	
	
	return 0;
}
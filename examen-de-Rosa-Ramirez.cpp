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
	if (clave == 123456)
	{
		cout << "\nClave correcta, bienvenido" << endl;
		cout << "\n---------- Menu ----------" << endl;
		cout << "Ingrese el numero de la accion que desee realizar:" << endl;
		cout << " 1. Calcular factorial de un numero. \n 2. Tabla de Multiplicar \n 3. Calcular numeros pares y promedio de impares. \n 4. Dia laboral." << endl;
		cout << ">> "; cin >> accion;
		
		switch (accion)
		{
			case 1:
			cout << "---------- Factorial de un numero ----------" << endl;
			cout << "Ingrese un valor" << endl;
			cout << ">> "; cin >> a;
			cout << "La factorial de "<< a << " es: " << factorial(a) << endl;
			break;
	
	
	return 0;
}
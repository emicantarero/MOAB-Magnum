#include "Pila.hpp"
#include <iostream>
#include <string>
#include "MiClase.hpp"
using namespace std;
template <class miTipo>
void tipos(miTipo m) {
	Pila< int > pila;
	Pila< MiClase > pila2;
	Pila< double > pila3;
	Pila< string > pila4;
	int flag;
	size_t pilaTam;
	double doubleValor = 1.1;
	int intValor = 1;
	if (typeid(m) == typeid(double)) {
		pilaTam = 5;
		flag = 1;
		cout << "\n--> Insertar elementos en Pila de doubles\n";
	}
	else if (typeid(m) == typeid(int)) {
		pilaTam = 10;
		flag = 2;
		cout << "\n--> Insertar elementos en Pila de enteros\n";
	}
	else if (typeid(m) == typeid(string)) {
		pilaTam = 10;
		flag = 3;
		cout << "\n--> Insertar elementos en Pila de cadenas\n";
	}
	else {
		pilaTam = 10;
		flag = 4;
		cout << "\n--> Insertar elementos en Pila de objetos MiClase\n";
	}
	string stringTemp;

	for (size_t i = 0; i < pilaTam; i++)
	{
		switch (flag) {
		case 1:
			pila3.insertar(doubleValor);
			cout << doubleValor << ' '; doubleValor += 1.1;
			break;
		case 2:
			pila.insertar(intValor);
			cout << intValor++ << ' ';
			break;

		case 3:
			stringTemp = "C++" + to_string(i);
			pila4.insertar(stringTemp); cout << stringTemp << ' ';
			break;
		case 4:
			stringTemp = "MC" + to_string(i);
			MiClase mcTemp(stringTemp);
			pila2.insertar(mcTemp); cout << stringTemp << ' ';
		}
	}
	cout << "\n<-- Extraer elementos de Pila\n";
	while (!pila.estaVacia() || !pila2.estaVacia() || !pila3.estaVacia() || !pila4.estaVacia())
	{
		switch (flag) {
		case 1:
			cout << pila3.arriba() << ' '; pila3.extraer();
			break;
		case 2:
			cout << pila.arriba() << ' '; pila.extraer();
			break;

		case 3:
			cout << pila4.arriba() << ' '; pila4.extraer();
			break;
		case 4:
			cout << pila2.arriba() << ' '; pila2.extraer();
		}
	}
}
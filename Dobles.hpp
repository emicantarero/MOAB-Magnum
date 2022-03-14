#include "Pila.hpp"
#include <iostream>
using namespace std;
void Dobles() {
	Pila< double > doublePila;
	const size_t doublePilaTam = 5;
	double doubleValor = 1.1;
	cout << "\n--> Insertar elementos en doublePila\n";
	for (size_t i = 0; i < doublePilaTam; ++i) {
		doublePila.insertar(doubleValor);
		cout << doubleValor << ' '; doubleValor += 1.1;
	}
	cout << "\n<-- Extraer elementos de doublePila\n";
	while (!doublePila.estaVacia()) {
		cout << doublePila.arriba() << ' '; doublePila.extraer();
	}
}

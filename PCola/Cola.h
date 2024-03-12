#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Cola
{
private:
	T* cola;
	int tamaño;
	int elementos;
	int frente;
	int fin;

public:
	Cola(int _tamaño);
	~Cola();
	void encolar(T dato);
	T desencolar();
	int getTamaño();
	bool estaVacia();
	bool estaLlena();
	void imprimir();
};

template<typename T>
inline Cola<T>::Cola (int  _tamaño)
{
	tamaño = _tamaño;
	cola = new T[tamaño];
	frente = 0;
	fin = -1;
	elementos = 0;
}

template<typename T>
inline Cola<T>::~Cola()
{
	delete[] cola;
}

template<typename T>
inline void Cola<T>::encolar(T dato)
{
	if (!estaLlena())
	{
		fin = (fin + 1) % tamaño;
		cola[fin] = dato;
		elementos++;

	}
	else
	{
		cout << "La cola esta llena" << endl;
	}
}

template<typename T>
inline T Cola<T>::desencolar()
{
	if (!estaVacia())
	{
		T dato = cola[frente];
		frente = (frente + 1 ) % tamaño;
		elementos--;
		return dato;
	}
	else
	{
		cout << "La cola esta vacia" << endl;
	}

}

template<typename T>
inline int Cola<T>::getTamaño()
{
	return elementos;
}

template<typename T>
inline bool Cola<T>::estaVacia()
{

	return elementos == 0;
}

template<typename T>
inline bool Cola<T>::estaLlena()
{
	return elementos == tamaño;
}

template<typename T>
inline void Cola<T>::imprimir()
{
	int i = frente;
	int cont = 0;
	
	while (cont < elementos)
	{
		cout << " " << endl;
		cout << cola[i] << "";
		i = (i + 1) % tamaño;
		cont++;
		
	}
	cout << endl;

}


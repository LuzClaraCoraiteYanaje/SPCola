#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Cola
{
private:
	T* cola;
	int tama�o;
	int elementos;
	int frente;
	int fin;

public:
	Cola(int _tama�o);
	~Cola();
	void encolar(T dato);
	T desencolar();
	int getTama�o();
	bool estaVacia();
	bool estaLlena();
	void imprimir();
};

template<typename T>
inline Cola<T>::Cola (int  _tama�o)
{
	tama�o = _tama�o;
	cola = new T[tama�o];
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
		fin = (fin + 1) % tama�o;
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
		frente = (frente + 1 ) % tama�o;
		elementos--;
		return dato;
	}
	else
	{
		cout << "La cola esta vacia" << endl;
	}

}

template<typename T>
inline int Cola<T>::getTama�o()
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
	return elementos == tama�o;
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
		i = (i + 1) % tama�o;
		cont++;
		
	}
	cout << endl;

}


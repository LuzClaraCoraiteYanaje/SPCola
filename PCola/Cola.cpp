#include <iostream>
#include "cola.h"

int main() {
    // Crear una cola de enteros con un tamaño máximo de 5 elementos
    Cola<int> miCola(5);

    // Encolar algunos elementos
    miCola.encolar(10);
    miCola.encolar(20);
    miCola.encolar(30);
    miCola.encolar(40);
    miCola.encolar(50);


    // Imprimir la cola
    cout << "Cola total: ";
    miCola.imprimir();

    // Desencolar un elemento
    int elementoDesencolado = miCola.desencolar();
    cout << "Elemento primer en la cola: " << elementoDesencolado << endl;

    // Imprimir la cola después de desencolar
    cout << "Cola despues de sacar el primero de la cola: ";
    miCola.imprimir();

    // Verificar si la cola está vacía
    if (miCola.estaVacia()) {
        cout << "La cola está vacía." << endl;
    }
    else {
        cout << "La cola no esta vacia." << endl;
    }

    return 0;
}


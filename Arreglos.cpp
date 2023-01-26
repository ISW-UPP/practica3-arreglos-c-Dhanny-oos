// Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{
    //Practica 3 - Arreglos
    int arreglo[10];
    int tamaño, i, A, mayor = 0;
    double suma = 0;

    for (i = 0; i < tamaño; i++) {
        cout << "Da valor al lugar " << (i + 1) << ":";
        cin >> arreglo[i];
        if (arreglo[i] > mayor) {
            mayor = arreglo[i];
        }
    }

    cout << endl;
    cout << "Arreglo normal";

    for (i = 0; i < tamaño; i++) {
        cout << endl << "Componente " << (i + 1) << ":" << arreglo[i];
    }

    for (i = 0; i < tamaño / 2; i++) {
        A = arreglo[i];
        arreglo[i] = arreglo[tamaño - 1 - i];
        arreglo[tamaño - 1 - i] = A;
    }

    cout << endl;
    cout << endl;
    cout << "Arreglo invertido";

    for (i = 0; i < tamaño; i++) {
        cout << endl << "Componente " << (i + 1) << ":" << arreglo[i];
    }

    for (i = 0; i < tamaño; i++) {
        suma += arreglo[i];
    }

    cout << endl << endl << "La media es: " << suma * 1.0 / tamaño << endl;
    cout << endl << endl << "El numero mayor del arreglo es: " << mayor;
    return;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

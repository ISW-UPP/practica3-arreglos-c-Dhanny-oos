// Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int  principal(0);



int main()
{
    //Practica 3 - Arreglos
    //Orden inverso de 10 numeros
    int arreglo[10]{};

    for(int i = 0; i < 10; i++) {
        cout << " Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
    }

    cout << " El vector de manera inversa es: \n " << endl;
    for(int i = 9; i >= 0; i--)
    {
        cout << arreglo[i] << endl;
    }
    return  0;


    //Calcular la media de 10 numeros
    int arreglo[10]{};
    int suma = 0;


    for(int i = 0; i < 10; i++) {
        cout << " Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
    }
    for(int i = 0; i < 10; i++) {
        suma += arreglo[i];
    }

    cout << " La media del arreglo es: " << suma * 1.0 / 10 << endl;


    //Calcular el número mayor
    int i = 0, arreglo[10]{}, mayor = 0;

    for(i = 0; i < 10; i++) {
        cout << " Ingresa el valor: " << i << endl;
        cin >> arreglo[i];
    }
    if (arreglo[i] > principal) {
        principal = arreglo[i];
    }

    cout << " El numero mayor dentro del vector es: " << mayor << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

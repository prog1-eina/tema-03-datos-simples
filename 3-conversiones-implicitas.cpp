/*******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de septiembre de 2022
 * Resumen: Programa que prueba las conversiones implícitas que realiza C++.
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que prueba las conversiones implícitas que realiza C++.
 */
int main() {
    int edad;
    cout << edad << endl;   // Advertencia

    edad = 18;
    cout << edad << endl;

    edad = 17.8;
    cout << edad << endl;

    //edad = "18";          // Error sintáctico

    edad = true;
    cout << edad << endl;
}

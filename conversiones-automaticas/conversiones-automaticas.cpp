#include <iostream>
using namespace std;

/*
 * Programa que prueba las conversiones automáticas que C++ realiza.
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

    return 0;
}

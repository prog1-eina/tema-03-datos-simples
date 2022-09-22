/*******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de septiembre de 2022
 * Resumen: Programa que escribe en la pantalla la cantidad equivalente en euros
 *          a una cantidad de dinero entera expresada en pesetas solicitada
 *          previamente al usuario.
 ******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Tasa de cambio oficial entre pesetas y euro
 */
const double PTAS_POR_EURO = 166.386;


/*
 * Programa que escribe en la pantalla la cantidad
 * equivalente en euros a una cantidad de dinero entera
 * expresada en pesetas solicitada previamente al usuario.
 */
int main() {
    cout << "Escriba una cantidad en pesetas: ";
    int pesetas;
    cin >> pesetas;

    double euros = pesetas / PTAS_POR_EURO;
    
    cout << fixed << setprecision(2) << euros << " euros" << endl;
}

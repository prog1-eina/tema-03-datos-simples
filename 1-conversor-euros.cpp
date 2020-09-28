/*
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 24 de septiembre de 2020
 * Resumen: Programa que escribe en la pantalla la cantidad que
 *          equivale en euros a 2000 pesetas.
 */
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Tasa de cambio oficial entre pesetas y euro
 */
const double PTAS_POR_EURO = 166.386;


/*
 * Programa que escribe en la pantalla la cantidad que
 * equivale en euros a 2000 pesetas.
 */
int main() {
    int pesetas = 2000;
    double euros = pesetas / PTAS_POR_EURO;
    cout << fixed << setprecision(2) << euros << " euros" << endl;
    return 0;
}

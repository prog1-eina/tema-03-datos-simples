#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Programa que escribe en la pantalla la cantidad
 * equivalente en euros a una cantidad de dinero entera
 * expresada en pesetas solicitada previamente al usuario.
 */
int main() {
    const double PTAS_POR_EURO = 166.386;
    cout << "Escriba una cantidad en pesetas: ";
    int pesetas;
    cin >> pesetas;
    double euros = pesetas / PTAS_POR_EURO;
    cout << fixed << setprecision(2) << euros << " euros" << endl;
    return 0;
}

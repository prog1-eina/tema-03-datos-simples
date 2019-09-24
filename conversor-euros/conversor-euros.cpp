#include <iostream>
#include <iomanip>

using namespace std;

/*
 * Programa que escribe en la pantalla la cantidad que
 * equivale en euros a 2000 pesetas.
 */
int main() {
    const double PTAS_POR_EURO = 166.386;
    int pesetas = 2000;
    double euros = pesetas / PTAS_POR_EURO;
    cout << fixed << setprecision(2) << euros << " euros" << endl;
    return 0;
}

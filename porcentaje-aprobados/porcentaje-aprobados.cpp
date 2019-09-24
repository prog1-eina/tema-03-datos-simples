#include <iostream>

/*
 * Programa erróneo que pretende escribir en la pantalla el porcentaje de
 * aprobados correspondiente a 95 estudiantes aprobados con respecto a 160
 * estudiantes matriculados.
 */
int main() {
    int aprobados = 95;
    int matriculados = 160;
    
    double porcentaje = aprobados / matriculados * 100;
    
    std::cout << porcentaje << std::endl;
}

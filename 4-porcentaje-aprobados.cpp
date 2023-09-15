/*******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Última revisión: 22 de septiembre de 2022
 * Resumen: Programa ERRÓNEO que pretende escribir en la pantalla un porcentaje. 
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa ERRÓNEO que pretende escribir en la pantalla el porcentaje de
 * aprobados correspondiente a 95 estudiantes aprobados con respecto a 160
 * estudiantes matriculados.
 */
int main() {
    unsigned aprobados = 95;
    unsigned matriculados = 160;
    
    double porcentaje = aprobados / matriculados * 100;
    
    cout << porcentaje << endl;
}

#include <iostream>
#include <cmath>
int main()
{
    /*Ingreso de datos*/
    double p, r, n, t;
    std::cout << "Ingrese la cantidad inicial invertida: ";
    std::cin >> p;
    std::cout << "Ingrese la tasa de interes anual (en decimal): ";
    std::cin >> r;
    std::cout << "Ingrese el numero de veces que se aplica el interes al año: ";
    std::cin >> n;
    std::cout << "Ingrese el numero de años: ";
    std::cin >> t;
    /*Calcular el monto final usando la
     formula del interes compuesto*/

    double A = p * pow((1 + (r/n)), n*t);
    std::cout << "El monto final de acuerdo a los datos es de: $" << A << " unidades monetarias " << std::endl;

    return 0;
}
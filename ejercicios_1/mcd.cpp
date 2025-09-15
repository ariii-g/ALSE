#include <iostream>
int main() {
    int a, b;
    std::cout << "Ingrese el primer numero entero: ";
    std::cin >> a ;
    std::cout << "Ingrese el segundo numero entero:";
    std::cin >> b;

    /*Caso especial si alguno de los numeros es 0 o negativo*/
    if (b == 0) {
        std::cout << "El maximo comun divisor es: " << a << std::endl;
        return 0;
    }
    if (a == 0) {
        std::cout << "El maximo comun divisor es: " << b << std::endl;
        return 0;
    }
    if (a < 0){
         a = -a; 
    }
    if (b < 0){
     b = -b; 
    }
    /*Algoritmo para calcular el maximo comun divisor*/
    int min = 1;
    int max = 1;
    while (min <= a) {
        if (a % min == 0 && b % min == 0) {
            if (min > max){
                max = min;
            }
        }
        min += 1;
    }
    std::cout << "El maximo comun divisor es: " << max << std::endl;
    return 0;
}
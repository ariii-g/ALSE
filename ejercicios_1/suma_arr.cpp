#include <iostream>
int arr[5] ={10, 20, 30, 40, 50};
int suma = 0;
int main() {
    /*
    ciclo for que recorre cada posicion del arreglo para acumular su 
    suma
    */
    for (int i = 0; i < 5; i++) {
        suma += arr[i];
    }
    std::cout << "La suma de los elementos del arreglo es: " << suma << std::endl;
    return 0;
    }
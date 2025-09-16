#include <iostream>
void datos(float arr[10]){
    /*Funcion de toma de datos
    arr -> arr[10]
    */
std:: cout << "Distancia recorrida hoy" << std::endl;
std:: cout << "--------------------" << std::endl;
for (int i = 0; i < 10; i++) {
    std:: cout << "Conductor " << i + 1 << ": ";
    std :: cout << "Ingresa la distancia recorrida en km: ";
    std:: cin >> arr[i];
    }
}

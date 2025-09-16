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
void promedio(float arr[10], float &suma, float &prom){
    /*Funcion de calculo de suma y promedio de distancia
    arr[10], float, float -> float, float
    */
    suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += arr[i];
    }
    prom = suma / 10;
} 

void max(float arr[10], int &cond, float &maximo){
    /*Funcion de calculo de màxima distancia recorrida
    y el conductor que la recorre
    arr[10], int, float -> float,int
    */
    maximo = arr[0];
    cond = 1;
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
            cond = i + 1;
        }
    }
}

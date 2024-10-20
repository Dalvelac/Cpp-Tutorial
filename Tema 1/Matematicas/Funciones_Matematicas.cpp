#include <iostream>
#include <cmath> // Incluimos la libreria cmath para poder usar las funciones matematicas

//Todas las funciones que podemos utilizar se encuentran aqui: https://cplusplus.com/reference/cmath/

int main(){

    // Asignamos valores a las variables
    int x = 3;
    int y = 4;
    double g = 5.5;
    double z;

    z = std::max(x, y); // Devuelve el valor máximo entre x e y
        std::cout << z; 

    z = std::min(x, y); // Devuelve el valor mínimo entre x e y
        std::cout << '\n' << z;

    z = pow(3, 4); // Devuelve 3 elevado a la 4
        std::cout << '\n' << z;

    z = sqrt (16); // Devuelve la raiz cuadrada de 16
        std::cout << '\n' << z;

    z = abs(-5); // Devuelve el valor absoluto de -5
        std::cout << '\n' << z;

    z = round(g); // Devuelve el valor redondeado de g
        std::cout << '\n' << z;

    z = ceil(g); // Devuelve el valor redondeado hacia arriba de g
        std::cout << '\n' << z;

    z = floor(g); // Devuelve el valor redondeado hacia abajo de g
        std::cout << '\n' << z;

    return 0;
}
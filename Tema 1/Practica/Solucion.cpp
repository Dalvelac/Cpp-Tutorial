#include <iostream>
#include <cmath>

int main (){

    double a;
    double b; 
    double c; 

    std::cout << "Introduce el valor de a: ";
        std::cin >> a;

    std::cout << "Introduce el valor de b: ";
        std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    std::cout << "El valor de c es: " << c << std::endl;

    // Se podria simplificar aun mas: c = sqrt(pow(a, 2) + pow(b, 2));

    return 0;
    

}
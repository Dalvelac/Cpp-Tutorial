#include <iostream>
#include <limits> // Incluir para usar std::numeric_limits (IGNORAR ESTA LINEA)

int main() {
    std::string nombre;  // Nombramos la variable nombre como un string
    int edad; // Nombramos la variable edad como un entero

    std::cout << "Ingrese su nombre: "; // Pedimos al usuario que ingrese su nombre
    std::cin >> nombre; // Guardamos el nombre en la variable nombre

    std::cout << "Ingrese su edad: "; // Pedimos al usuario que ingrese su edad
    std::cin >> edad; // Guardamos la edad en la variable edad

    std::cout << "Hola " << nombre << " tienes " << edad << " años." << std::endl; 

    // Limpiar el buffer antes de usar std::getline (IGNORAR ESTA LINEA)
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Pedimos al usuario que ingrese su nombre completo
    std::string nombre_completo; // Nombramos la variable nombre_completo como un string
    std::cout << "Ingrese su nombre completo: ";
    std::getline(std::cin, nombre_completo); // Guardamos el nombre completo en la variable nombre_completo

    std::cout << "Hola " << nombre_completo << std::endl;

    // Ahora digamos que queremos que el usuario ingrese un número decimal
    double numero; 

    std::cout << "Ingrese un número decimal: "; // Pedimos al usuario que ingrese un número decimal
    std::cin >> numero; // Guardamos el número en la variable numero

    std::cout << "El numero es: " << numero << std::endl;

    return 0;
}

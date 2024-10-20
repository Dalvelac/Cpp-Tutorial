#include <iostream>

//typedef std::string culodemono;
//typedef int pedos;
//Podemos usar typedef, pero es preferible usar using:


// Se utilizan para darle un alias a un tipo de dato.
using uno = std::string;
using dos = int;

int main(){

    uno x = "La felicidad";
    dos y = 42;
    std::cout << "La respuesta a la vida es  " << x << "\n pero tambien podemos considerar que me tiro " << y << " pedos al dia" << std::endl;

    printf("Se utilizan para darle un alias a un tipo de dato.\n");
}
#include <iostream>

//typedef std::string culodemono;
//typedef int pedos;
//Podemos usar typedef, pero es preferible usar using:

using culodemono = std::string;
using pedos = int;

int main(){

    culodemono x = "PedoPis";
    pedos y = 42;
    std::cout << "La respuesta a la vida es  " << x << "\n pero tambien podemos considerar que me tiro " << y << " pedos al dia" << std::endl;

    printf("El typedef se utiliza para darle un alias a un tipo de dato, en este caso le dimos el alias pedos a int y culodemono a std::string. \n Es preferible utilizar using en vez de typedef dado a que funciona mejor con los templates.");
}
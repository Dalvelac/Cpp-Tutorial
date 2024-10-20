#include <iostream>

namespace first {
    int a = 43929;
    int b = 312838;
    int c = 13131;
}

namespace second {
    int a = 532;
    int b = 213;
    int c = 123;
}

namespace third {
    std::string z = "Que tal!";
    std::string x = "Muy bien";

}

int main() {

    using namespace second; // Si cambiasemos esto por using namespace first; nos daria el resultado de la suma de los valores en ese namespace.
    using namespace third;

    std::cout << "El resultado de la suma es: " << (a + b) << std::endl; // Aqui utilizamos el namespace second.

    std::cout << z << " " << x << std::endl; // Aqui utilizamos el namespace third.

    printf("\n Los namespaces se utilizan para evitar conflictos de nombres, es decir, si tenemos dos variables con el mismo nombre en diferentes namespaces, no habra problema. \n En este caso, utilizamos el namespace second para sumar dos variables con el mismo nombre que en el namespace first. \n Tambien utilizamos el namespace third para imprimir dos strings que estan en ese namespace.");
}
#include <iostream>

int main() {

    //Ejemplo en el que se pide la edad y se comprueba si es mayor o igual a 18, utilizando un if >=18
    int edad;

    std::cout << "Introduce tu edad: ";
        std::cin >> edad;

    if(edad >=18){ // Si la edad es mayor o igual a 18
        std::cout << "Estas autorizado para entrar \n";

    //Ahora, tenemos que hacer un mensaje para el caso en el que la edad sea menor a 0
    }  else if(edad < 0) {
        std::cout << "Todavia no has nacido. \n";
    
    //Pongamos otro ejemplo de un mensaje else if, en el caso de que sea mayor a 150 años.
    }  else if(edad >150) {
        std::cout << "Eres inmortal? \n";

    //Ahora, tenemos que hacer un mensaje para el caso en el que no sea mayor o igual a 18
    } else { 
        std::cout << "No estas autorizado para entrar \n";
}

    printf("Si intentas poner que tu edad es mayor que 150, te dira que estas autorizado para entrar. La jerarquia de los else if es importante. La manera correcta de hacerlo seria como se proporciona en los comentarios.");
    return 0;

    //La manera correcta de hacerlo seria: 
    // if (edad >=150) {
    //     std::cout << "Eres inmortal? \n";
    // } else if (edad >=18) {
    //     std::cout << "Estas autorizado para entrar \n";
    // } else if (edad < 0){
    //     std::cout << "Todavia no has nacido. \n";
    // } else {
    //    std::cout << "No estas autorizado para entrar \n";
    // }
 
}
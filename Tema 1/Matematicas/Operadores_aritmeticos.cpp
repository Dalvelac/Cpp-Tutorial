#include <iostream>

int main() {
    // Inicializamos la variable students con el valor 20
    const int initial_students = 20;
    int students = initial_students; 
    std::cout << "Valor inicial de students: " << students << std::endl;

    // Suma
    students = students + 1; // Esto va a sumar 1 a la variable students.
    std::cout << "Después de students = students + 1: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students += 1; // Esto va a sumar 1 a la variable students.
    std::cout << "Después de students += 1: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students++; // Esto va a sumar 1 a la variable students, es lo mismo que students += 1, pero se utiliza más en bucles.
    std::cout << "Después de students++: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    // Resta
    students = students - 1; // Esto va a restar 1 a la variable students.
    std::cout << "Después de students = students - 1: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students--; // Esto va a restar 1 a la variable students, es lo mismo que students -= 1, pero se utiliza más en bucles.
    std::cout << "Después de students--: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students -= 1; // Esto va a restar 1 a la variable students.
    std::cout << "Después de students -= 1: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    // Multiplicación
    students = students * 2; // Esto va a multiplicar por 2 a la variable students.
    std::cout << "Después de students = students * 2: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students *= 2; // Esto va a multiplicar por 2 a la variable students.
    std::cout << "Después de students *= 2: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    // División
    students = students / 2; // Esto va a dividir por 2 a la variable students.
    std::cout << "Después de students = students / 2: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    students /= 2; // Esto va a dividir por 2 a la variable students.
    std::cout << "Después de students /= 2: " << students << std::endl;
    students = initial_students; // Volver al valor inicial

    return 0;
}
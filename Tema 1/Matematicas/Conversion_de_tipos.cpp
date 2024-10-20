#include <iostream>

// Hay dos tipos de conversión de tipos:
// Conversión implícita: Se realiza automáticamente por el compilador.
// Conversión explícita: Se realiza manualmente por el programador.

int main() {

    // Conversión implícita

    // Asignar un valor decimal a una variable entera
    int x = 3.14; // Esto nos daría 3, ya que estamos asignando un valor decimal a una variable entera.
    std::cout << "Valor de x (int) después de asignar 3.14: " << x << std::endl;

    // Asignar un valor decimal a una variable double
    double y = 3.14; // Nos daría 3.14
    std::cout << "Valor de y (double) después de asignar 3.14: " << y << std::endl;


    // Conversión explícita

    // Convertir un valor decimal a entero explícitamente
    double z = (int)3.14; // Nos daría 3, ya que estamos convirtiendo un decimal a entero.
    std::cout << "Valor de z (double) después de convertir explícitamente 3.14 a int: " << z << std::endl;

    // Asignar un valor entero a una variable char
    char w = 100; // Esto nos daría la letra "d" en ASCII, ya que estamos asignando un valor entero a una variable char.
    std::cout << "Valor de w (char) después de asignar 100: " << w << std::endl;

    // Convertir un valor entero a char explícitamente
    std::cout << (char) 100 << std::endl; // Esto nos daria la letra "d" una vez mas.


    // Ejemplo de como puede ser utilizado 
    int correctas = 8;
    int preguntas = 10; 

    double nota = correctas / (double)preguntas * 100;

    std::cout << "Nota: " << nota << "%" << std::endl; // Esto nos daría 80%, ya que la división se realiza entre enteros.

    return 0;
}
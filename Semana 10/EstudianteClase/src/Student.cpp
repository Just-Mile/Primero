#include "Student.h"

Student::Student()
{
    nombre = " ";
    edad = 0;
}

Student::Student(string nombre_ , int edad_)
{
    nombre = nombre_;
    edad = edad_;
}


Student::~Student()
{
    std::cout << "Llamando al destructor" << std::endl;
}

void Student::print() const
{
    std::cout << "Nombre: " << nombre << std:endl;
    std::cout << "Edad: " << edad << std:endl;
}

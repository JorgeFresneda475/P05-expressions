/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Jorge Fresneda Pérez 
* Correo: alu0101423500@ull.edu.es
* @date 03/11/2022
* @brief P48107_division_reminder.cc
*
* Este programa calcula la división de dos números y su resto.
*
*/

#include <iostream>

int main() {
  int dividendo, divisor;
  // std::cout << "Escoja el dividendo y el divisor: " << std::endl;
  std::cin >> dividendo;
  std::cin >> divisor;
  if(divisor > 0){
    int division = dividendo / divisor;
    int resto = dividendo % divisor;
    std::cout << division << " " << resto << std::endl;
  }
  else{
    std::cout << "Tu segundo número no es mayor que 0";
  }
}

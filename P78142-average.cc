/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Jorge Fresneda Pérez 
* Correo: alu0101423500@ull.edu.es
* @date 03/11/2022
* @brief P78142-average.cc
*
* Este programa calcula la media entre varios números.
*
*/

   
#include <iostream>
#include <vector>
#include <iomanip>

int main() {
  std::vector <double> numeros;
  double numero1, numero2, numero3;
  std::cin >> numero1;
  std::cin >> numero2;
  std::cin >> numero3;
  numeros.push_back(numero1);
  numeros.push_back(numero2);
  numeros.push_back(numero3);
  double suma = numero1 + numero2 + numero3;
  double average = suma / numeros.size();
  std::cout << std::fixed << std::setprecision(2) << average << std::endl;
  return 0;
}

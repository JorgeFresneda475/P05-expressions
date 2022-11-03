/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Jorge Fresneda Pérez 
* Correo: alu0101423500@ull.edu.es
* @date 03/11/2022
* @brief P62421-three-words.cc
*
* Este programa calcula la división de dos números y su resto.
*
*/


#include <iostream>
#include <vector>
#include <string>

int main() {
  std::vector <std::string> cadenas;
  std::string palabra1, palabra2, palabra3;
  std::cin >> palabra1;
  std::cin >> palabra2;
  std::cin >> palabra3;
  cadenas.push_back(palabra1);
  cadenas.push_back(palabra2);
  cadenas.push_back(palabra3);
  std::cout << cadenas[2] << " " << cadenas[1] << " " << cadenas[0] << std::endl;
  return 0;
}

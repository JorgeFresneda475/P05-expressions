/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Fresneda Pérez 
 * Correo: alu0101423500@ull.edu.es
 * @date 03/11/2022
 * @brief desinflado.cc
 *
 * Este programa convierte las mayúsculas a minúsculas.
 *
 */

#include <iostream>

int main() {
  char letra_mayuscula;
  std::cout << "Introduzca una letra mayúscula: ";
  std::cin >> letra_mayuscula;
  char letra_minuscula = letra_mayuscula + 32;
  std::cout << "La letra minúscula es: " << letra_minuscula << std::endl;
}
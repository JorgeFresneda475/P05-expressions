/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Fresneda Pérez 
 * Correo: alu0101423500@ull.edu.es
 * @date 03/11/2022
 * @brief arithmetic_operators.cc
 *
 * Este programa calcula las operaciones aritméticas y comparativas entre dos números.
 *
 */

#include <iostream>
#include <math.h>

int main() {
  int numero1, numero2;
  std::cout << "Escoja los números, donde el primero tiene que ser mayor que el segundo: " << std::endl;
  std::cin >> numero1;
  std::cin >> numero2;
  std::cout << std::endl;
  //OPERACIONES ARITMÉTICAS
  int suma = numero1 + numero2;
  int resta = numero1 - numero2;
  int multiplicacion = numero1 * numero2;
  int division = numero1 / numero2;
  int potencia = pow(numero1, numero2);
  int modulo = numero1 % numero2;
  std::cout << "La suma es: " << suma << std::endl;
  std::cout << "La resta es: " << resta << std::endl;
  std::cout << "La multiplicación es: " << multiplicacion << std::endl;
  std::cout << "La división es: " << division << std::endl;
  std::cout << "La potencia es: " << potencia << std::endl;
  std::cout << "El módulo es: " << modulo << std::endl;
  //OPERACIONES COMPARATIVAS
  if(numero1 == numero2) {
    std::cout << "Los dos números son iguales" << std::endl;
  }
  if(numero1 != numero2) {
    std::cout << "Los dos números son diferentes" << std::endl;
  }
  if(numero1 > numero2) {
    std::cout << "El primer número es mayor que el segundo" << std::endl;
  }
  if(numero1 < numero2) {
    std::cout << "El primer número es menor que el segundo" << std::endl;
  }
  if(numero1 >= numero2) {
    std::cout << "El primer número es mayor o igual que el segundo" << std::endl;
  }
  if(numero1 <= numero2) {
    std::cout << "El primer número es menor o igual que el segundo" << std::endl;
  }
}

/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jorge Fresneda Pérez 
 * Correo: alu0101423500@ull.edu.es
 * @date 03/11/2022
 * @brief boolean_operators.cc
 *
 * Este programa hace una tabla para los valores not, or y and de dos variables.
 *
 */

#include <iostream>

int main() {
  bool p;
  std::cout << "p    !p    " << std::endl;
  std::cout <<"----- -----" << std::endl;
  std::cout << true << "      " << !true << std::endl;
  std::cout << false << "      " << !false << std::endl;
  std::cout << std::endl;

  std::cout << "p q    p && q" <<std::endl;
  std::cout <<"------  ------" << std::endl;
  std::cout << false << " " << false << "       " << (false && false) << std::endl;
  std::cout << false << " " << true << "       " << (false && true) << std::endl;
  std::cout << true << " " << false << "       " << (true && false) << std::endl;
  std::cout << true << " " << true << "       " << (true && true) << std::endl;
  std::cout << std::endl;

  std::cout << "p q    p || q" <<std::endl;
  std::cout <<"------  ------" << std::endl;
  std::cout << false << " " << false << "       " << (false || false) << std::endl;
  std::cout << false << " " << true << "       " << (false || true) << std::endl;
  std::cout << true << " " << false << "       " << (true || false) << std::endl;
  std::cout << true << " " << true << "       " << (true || true) << std::endl;
  std::cout << std::endl;
 }
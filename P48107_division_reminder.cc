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
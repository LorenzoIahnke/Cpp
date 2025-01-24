#include <iostream>

int main() {
  std::string dog_name;
  int dog_age, early_years, later_years, human_years;

  std::cout << "Enter your dog's name: ";
  std::cin >> dog_name;

  std::cout <<"Enter your dog's age: ";
  std::cin >> dog_age;
  early_years = 21;
  later_years = (dog_age - 2)*4;
  human_years = early_years + later_years;

  std::cout <<"My name is "<<dog_name<< "! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
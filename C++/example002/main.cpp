#include <iostream>

int main() {
  double earthWeight;
  double marsWeight;

  std::cout <<"Enter your weight: \n";
  std::cin >> earthWeight;
  marsWeight = (earthWeight/10) * 3.8;
  std::cout <<"You would weight " << marsWeight << " kilogrmes on Mars\n"; 
}
#include <iostream>

int main() {
  int x;
  double weight;
  std::cout <<"Enter your Earth weight: ";
  std::cin >> weight;
  std::cout <<"Now, select a number from 1 to 7 to select a planet: \n\n";
  std::cout <<"1 - Mercury   2 - Venus   3 - Mars   4 - Jupiter\n";
  std::cout <<"5 - Saturn    6 - Uranus  7 - Neptune\n";
  std::cout <<": ";
  std::cin >> x;
  switch(x){
    case 1:
      weight *= 0.38;
      break;
    case 2:
      weight *= 0.91;
      break;
    case 3:
      weight *= 0.38;
      break;
    case 4:
      weight *= 2.34;
      break;
    case 5:
      weight *= 1.06;
      break;
    case 6:
      weight *= 0.92;
      break;
    case 7:
      weight *= 1.19;
      break;
    default:
      std::cout <<"Not a Valid Option!\n";
  }
  std::cout <<"Your weight is now: \n" << weight << "\n";
  
}
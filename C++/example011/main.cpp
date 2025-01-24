#include <iostream>

  void conduct_IT_support(){
    std::string on_off_attempt;
    std::cout << "Hello. IT.\n";
    std::cout << "Have you tried turning it off and on again? y/n\n";
    std::cin >> on_off_attempt;
  }

  void check_in_Jenn(){
    std::cout << "Oh hi Jenn!\n";
  }

  void check_in_Roy(){
    std::cout << "You stole the stress machine? But that's stealing!\n";
  }
int main() {
  conduct_IT_support();
  check_in_Jenn();
  conduct_IT_support();
  check_in_Roy();
}
#include <iostream>

// Define needs_water() here:
std::string needs_water(int days, bool is_succulent){
  if(!is_succulent && days > 3){
    return "Time to water the plant!\n";
  }else if(is_succulent && days <= 12){
    return "Don't water the plant!\n";
  }else if(is_succulent && days >= 13){
    return "Go ahead and give the plant a little shower!\n";
  }else{
    return "Don't water the plant!\n";
  }
}

int main() {
  
  std::cout << needs_water(10, false) << "\n";
  
}
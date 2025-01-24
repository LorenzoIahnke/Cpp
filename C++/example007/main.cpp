#include <iostream>
#include <vector>

int main(){
  int total_even = 0;
  int product_odd = 1;
  std::vector<int> vector = {4, 1, 3, 5, 2, 6, 7, 7};

  for(int i = 0; i < vector.size(); i++){
    if(vector[i]%2 == 0){
      total_even += vector[i]; 
    } else{
      product_odd *= vector[i];
    }
  }
  std::cout <<"Sum of even: " << total_even << "\n";
  std::cout <<"Product of odd: " << product_odd << "\n";
}
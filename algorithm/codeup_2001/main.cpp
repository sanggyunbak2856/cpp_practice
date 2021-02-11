#include <iostream>
#include <vector>

using namespace std;

int main(void){
  std::vector<int> vec(5);

  for(int i = 0; i < 5; i++){
    std::cin >> vec[i];
  }

  int min_pasta = 2000, min_beb = 2000;

  for(int i = 0; i < 3; i++){
    if(min_pasta > vec[i]){
      min_pasta = vec[i];
    }
  }

  for(int i = 3; i < 5; i++){
    if(min_beb > vec[i]){
      min_beb = vec[i];
    }
  }

  double total = min_pasta + min_beb;
  total = total * (1.1);
  
  cout << fixed;
  cout.precision(1);

  std::cout << total;
}
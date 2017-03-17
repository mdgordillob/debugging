#include <iostream>
int main(void) {
  double array[10]={ 1,2,3,4,5,6,7,8,9};
  std::cout<<array[0]<<std::endl;
  std::cout<<array[3]<<std::endl;
  return 0;
}
//g++ -Wall -fsanitize=address -fsanitize=leak -fsanitize=undefined -std=c++11 ejemplo.cpp

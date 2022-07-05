#include <iostream>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  for (int i = 1; i < 10; i++) {
    std::cout << n << " * " << i << " = " << n * i << std::endl;
  }
  return 0;
}
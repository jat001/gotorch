#include <iostream>
#include <torch/extension.h>

void myfunc() {
  torch::Tensor tensor = torch::rand({2, 3});
  std::cout << tensor << std::endl;
}

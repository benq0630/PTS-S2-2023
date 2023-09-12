#include <iostream>

int main()
{
  int my_array[] = { 10, 20, 30 };
  int* p = my_array; // points to the first element
  int q = *(p + 1);

  std::cout << "Accessing elements" << std::endl;
  std::cout << *p << std::endl;
  std::cout << my_array[0] << std::endl;
  std::cout << *(p + 1) << std::endl;
  std::cout << my_array[1] << std::endl;
  std::cout << *(p + 2) << std::endl;
  std::cout << my_array[2] << std::endl;

  std::cout << "Checking brackets" << std::endl;
  // accessing element at address (p + 1)
  std::cout << *(p + 1) << std::endl;
  // accessing element at p, and adding 1
  std::cout << *p + 1 << std::endl;

  return 0;
}
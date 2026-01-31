#include <iostream>

int main() {
  int a { 6 };
  int b { 7 };
  int sum = a + b;
  std::cout << a;
  std::cout << b << std::endl;
  std::cout << "6 + 7 is equal to " << sum << std::endl;
  std::cout << "Hello, World!\n";
  std::cout << "Gentoo linux is the goat distro \n";
  std::cout << "Gentoo penguins are also goated\n";
  
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "You are " << age << " years old\n";
  return 0; 
}

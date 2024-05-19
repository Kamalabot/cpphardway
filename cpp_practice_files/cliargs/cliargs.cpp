#include <iostream>

int main(int argc, char *argv[]) {
  // Print the number of command-line arguments.
  std::cout << "Number of arguments: " << argc << std::endl;

  // Print each command-line argument.
  for (int i = 0; i < argc; i++) {
    std::cout << "Argument " << i << ": " << argv[i] << std::endl;
  }

  return 0;
}
#include <iostream>

#include "CalculatorFunctions.h"

int main()
{
  std::cout << "Hey James!" << std::endl;

  double a = 0;
  std::cout << "Enter the first number: " << std::endl;
  std::cin >> a;

  double b = 0;
  std::cout << "Enter the second number: " << std::endl;
  std::cin >> b;

  // Now lets add the two numbers
  double result = Calculator::Add( a, b );
  std::cout << a << " + " << b << " = " << result << std::endl;

  // Now lets subtract the two numbers
  result = Calculator::Subtract( a, b );
  std::cout << a << " - " << b << " = " << result << std::endl;

  // Now lets multiply the two numbers
  result = Calculator::Multipy( a, b );
  std::cout << a << " x " << b << " = " << result << std::endl;

  // Now lets divide the two numbers
  result = Calculator::Divide( a, b );
  std::cout << a << " / " << b << " = " << result << std::endl;

  // The program is done, so return 0, which means it was successfull
  return 0;
}
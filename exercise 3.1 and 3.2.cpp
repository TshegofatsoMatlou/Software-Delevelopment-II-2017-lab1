// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;

int main()
{
  typedef complex<float> complexVariable;

  complexVariable num1{ 2.0, 2.0 }; // using C++11 uniform initialisation syntax
  complexVariable num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);

  auto answer = num1 * num2; // using C++11 auto keyword,
  // answer is of type: complex<float>

  cout << "The answer is: " << answer << endl;
  cout << "Or in a more familiar form: " << answer.real() << " + " <<
  answer.imag() << "j" << endl;

  // answer++; This commented statement will not compile because it is defined
  //in the complex type in which it stores real and imaginary values as opposed
  //to just storing only one value which can be easily increnented when using the ++ operator
  return 0;
}

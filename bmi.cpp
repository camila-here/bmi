#include <iostream>
#include <math.h> //pow method

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;

  // Ask user for their weight

  std::cout << "Type in your weight (kgs): ";
  std::cin >> weight;

  //Calculate BMI and output
  bmi = weight/pow(height, 2.0);
  std::cout << "Your BMI is: " << bmi;
  
  
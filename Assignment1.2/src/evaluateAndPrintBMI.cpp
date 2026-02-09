#include <iostream>
#include "evaluateAndPrintBMI.hpp"

void evaluateAndPrintBMI(const double bmi) {
    if (bmi < 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        std::cout << "You have a normal weight." << std::endl;
    } else if (bmi >= 25 && bmi < 30) {
        std::cout << "You are overweight." << std::endl;
    } else if (bmi >= 30) {
        std::cout << "You are obese." << std::endl;
    }
    else {
        std::cout << "Invalid BMI value." << std::endl;
    }
}

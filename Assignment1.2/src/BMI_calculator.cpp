#include "BMI_calculator.hpp"
#include <cmath>
#include <iostream>

// Function to calculate BMI
double calculate_BMI(const double weight_kg, const double height_m) {
    const double bmi = weight_kg / (height_m * height_m);
    std::cout << "Your BMI is: " << bmi << std::endl;
    return bmi;
}


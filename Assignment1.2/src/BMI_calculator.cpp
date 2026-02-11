#include "BMI_calculator.hpp"
#include <cmath>
#include <iostream>

// Function to calculate BMI
double calculate_BMI(void) {
    //create height and weight variables
    float weight_kg;
    float height_m;
    //read in the height and weight from the user
    std::cout << "Enter your weight in kg: ";
    std::cin >> weight_kg;
    std::cout << "Enter your height in m: ";
    std::cin >> height_m;
    const double bmi = weight_kg / (height_m * height_m);
    std::cout << "Your BMI is: " << bmi << std::endl;
    return bmi;
}


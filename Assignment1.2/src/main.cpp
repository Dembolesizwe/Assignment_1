#include "BMI_calculator.hpp"
#include "printInfo.hpp"
#include "evaluateAndPrintBMI.hpp"
#include <iostream>


int main(){
    float weight_kg;
    float height_m;

    std::cout << "This program calculates your Body Mass Index (BMI)" << std::endl;
    printInfo();
    std::cout << "Enter your weight in kg: ";
    std::cin >> weight_kg;
    std::cout << "Enter your height in m: ";
    std::cin >> height_m;

    float bmi = calculate_BMI(weight_kg, height_m);
    evaluateAndPrintBMI(bmi);
    return 0;
}
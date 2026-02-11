#include "BMI_calculator.hpp"
#include "printInfo.hpp"
#include "evaluateAndPrintBMI.hpp"
#include <iostream>


int main(){
    std::cout << "This program calculates your Body Mass Index (BMI)" << std::endl;
    printInfo();
    float bmi = calculate_BMI();
    evaluateAndPrintBMI(bmi);
    return 0;
}
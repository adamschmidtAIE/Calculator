// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float Add(float x, float y);
float Multiply(float x, float y);
float Subtract(float x, float y);
float Divide(float x, float y);

int main()
{
    //Inputs
    float x, y;
    std::cout << "I am a calculator!\nEnter your numbers...\n";
    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;

    //Calculations
    std::cout << x << " + " << y << " = " << Add(x, y);
    std::cout << std::endl << x << " - " << y << " = " << Subtract(x, y);
    std::cout << std::endl << x << " x " << y << " = " << Multiply(x, y);
    std::cout << std::endl << x << " / " << y << " = " << Divide(x, y);
}

float Add(float x, float y)
{
    return x + y;
}
float Multiply(float x, float y)
{
    return x * y;
}
float Subtract(float x, float y)
{
    return x - y;
}
float Divide(float x, float y)
{
    return x / y;
}

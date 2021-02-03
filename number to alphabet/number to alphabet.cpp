// number to alphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int main()
{
    int number[9] = { 1,2,3,4,5,6,7,8,9};
    std::string hello[9] = { "one","two","three","four","five","six","seven","eight","nine" };
    int input;
    std::cout << "enter number ";
    std::cin >> input;
    int arrayNumber = input - 1;
    std::string output = hello[arrayNumber];
    std::cout << output;
    
        
return 0;
} 
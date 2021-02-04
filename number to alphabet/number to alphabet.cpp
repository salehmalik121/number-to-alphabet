// number to alphabet.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
int main()
{
    int number[9] = { 1,2,3,4,5,6,7,8,9};
    std::string alphabets[9] = { "one","two","three","four","five","six","seven","eight","nine" };
    int input;
    std::cout << "enter number ";
    std::cin >> input;
    // to find length 
    float lengthRaw = log10(input) + 1;
    int length = (int)lengthRaw;
    std::cout << input << " ===> ";
    //loop to convert
    int i = length-1;
    while(i!=-1 ) {
        //separting numbers
        
        float proccessingNumberRaw = input /std::pow(10, i);
        int proccessingNumber = (int)proccessingNumberRaw;
        //matching in array 
        std::string output = alphabets[proccessingNumber-1];
        std::cout << output << " ";
       // preparing for next input
       input = input - (std::pow(10, i)) * proccessingNumber;
    i = i-1;
    }
return 0;
} 
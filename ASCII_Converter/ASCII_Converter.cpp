

#include <iostream>

/**
    Simple program to convert a 5 letter input to ASCII numbers, then convert a new 5 number input back to letters.
*/



void convert_letters_to_ASCII() {
    char c1, c2, c3, c4, c5;

    std::cout << "Enter 5 Letters: ";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;

    std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
}

void convert_ASCII_to_letters() {
    unsigned int int1, int2, int3, int4, int5;

    std::cout << "Enter 5 ASCII numbers " << std::endl;
    std::cout << "First number: " << std::endl;
    std::cin >> int1;
    std::cout << "Second number: " << std::endl;
    std::cin >> int2;
    std::cout << "Third number: " << std::endl;
    std::cin >> int3;
    std::cout << "Fourth number: " << std::endl;
    std::cin >> int4;
    std::cout << "Fifth number: " << std::endl;
    std::cin >> int5;

    std::cout << "ASCII message: " << char(int1) << char(int2) << char(int3) << char(int4) << char(int5) << std::endl;
}



int main()
{
    
    convert_letters_to_ASCII();
       
    convert_ASCII_to_letters();

    std::system("pause>0");
}



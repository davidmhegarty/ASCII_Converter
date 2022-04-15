

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


/*
  Bug: Entering letters causes an unbreakable loop  
*/
int get_menu_input() {
    int user_input;
    std::cin >> user_input;
    return user_input;
}

void action_user_menu_option(int menu_option) {
    switch (menu_option) {
    case 1:
        convert_letters_to_ASCII();
        break;
    case 2:
        convert_ASCII_to_letters();
        break;
    case 3:
        exit(0);
        break;
    default:
        std::cout << menu_option << " is not a recognized menu option, please try again." << std::endl;
        std::cout << "Enter a menu option (1-3): ";
        action_user_menu_option((int)get_menu_input());
    }
}

void main_menu() {
    int menu_option;
    std::cout << "ASCII Converter Menu" << std::endl;
    std::cout << "1: Text to ASCII Converter" << std::endl;
    std::cout << "2: ASCII to Text Converter" << std::endl;
    std::cout << "3: Exit Program" << std::endl;
    std::cout << "Enter a menu option (1-3): ";
    menu_option = get_menu_input();

    action_user_menu_option((int)menu_option);
}





int main()
{
    
    
    main_menu();
    

    std::system("pause>0");
}



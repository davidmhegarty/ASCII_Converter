

#include <iostream>

/**
    Simple program to convert a 5 letter input to ASCII numbers, then convert a new 5 number input back to letters.
*/

bool program_running = true;

/*
  Get user input text and output the ASCII characters 
*/
void convert_letters_to_ASCII() {
    char c1, c2, c3, c4, c5;

    std::cout << "Enter 5 Letters: ";
    std::cin >> c1 >> c2 >> c3 >> c4 >> c5;

    std::cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << std::endl;
}

/*
  Get user input for the ASCII characters and verify that it is an int type and below 255
*/
unsigned int get_ASCII_number() {
    unsigned int integer_input;
    std::cin >> integer_input;
    while (std::cin.fail() && integer_input < 256) {
        std::cout << "Input not recognized, please try again: ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> integer_input;
    }
    return integer_input;
}

/*
  Collect numbers from user and oupput the ASCII characters for each.
*/
void convert_ASCII_to_letters() {
    unsigned int int1, int2, int3, int4, int5;

    std::cout << "Enter 5 ASCII numbers " << std::endl;
    std::cout << "First number: " << std::endl;
    int1 = get_ASCII_number();
    std::cout << "Second number: " << std::endl;
    int2 = get_ASCII_number();
    std::cout << "Third number: " << std::endl;
    int3 = get_ASCII_number();
    std::cout << "Fourth number: " << std::endl;
    int4 = get_ASCII_number();
    std::cout << "Fifth number: " << std::endl;
    int5 = get_ASCII_number();

    std::cout << "ASCII message: " << char(int1) << char(int2) << char(int3) << char(int4) << char(int5) << std::endl;
}


/*
  Get user input for the menu and verify that it is an int type  
*/
int get_menu_input() {
    int user_input;
    std::cin >> user_input;
    while (std::cin.fail()) {
        std::cout << "Input not recognized, please try again." << std::endl;
        std::cout << "Enter a menu option (1-3): ";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> user_input;
    }
    return user_input;
}

/*
  Run the selected user menu option or ask for input again.
*/
void action_user_menu_option(int menu_option) {
    switch (menu_option) {
    case 1:
        convert_letters_to_ASCII();
        break;
    case 2:
        convert_ASCII_to_letters();
        break;
    case 3:
        program_running = false;
        exit(0);
        break;
    default:
        std::cout << menu_option << " is not a recognized menu option, please try again." << std::endl;
        std::cout << "Enter a menu option (1-3): ";
        action_user_menu_option((int)get_menu_input());
    }
}

/*
  Print out the menu and ask user for input
*/
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
    while (program_running)
    {
        main_menu();
    }
 
    std::system("pause>0");
}



#include <iostream>
#include "string.h"
#include "database.h"

using std::string;

int main() {
    string correctID = "root";
    string correctPW = "pw";
    string userID;
    string userPassword;


    std::cout << "Enter User ID: " << std::endl;
    std::cin >> userID;
    std::cout << "Enter User Password: " << std::endl;
    std::cin >> userPassword;

    //login
    if(!userID.compare(correctID) == 0 || !userPassword.compare(correctPW) == 0) {
        std::cout << "Error: incorrect user id or password" << std::endl;
        return -1;
    }






    //main loop
    while(true) {
        //stdin menu choice
        std::cout << "Welcome to smPOS!" << std::endl;
        std::cout << "Please select an action:" << std::endl;
        std::cout << "(1) POS mode" << std::endl;
        std::cout << "(2) Open/Close POS session" << std::endl;
        std::cout << "(3) Open/Close Shop" << std::endl;
        std::cout << "(4) Settings" << std::endl;
        std::cout << "(5) Exit smPOS" << std::endl;

        uint8_t option;
        std::cin >> option;

        switch(option) {
//quick menu
            case 1://pos.exe ????:

            break;

            case 2: //manage>POS Open/close

            break;
            case 3: //manage>Shop Open/close
            break;

            case 4: //System>Preferences
            break;

            case 5: //Close>Exit
            break;
            
            default:
                std::cout << "Unknown option." << std::endl;
            break;
// //toolbar todo
//             case //Code

//             case //Input

//             case //Manage

//             case //Report

//             case //System

//             case //close
        }
    }

    //exit cleanly
    return 0;
}

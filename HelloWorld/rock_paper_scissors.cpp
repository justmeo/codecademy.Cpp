#include <iostream>
#include <stdlib.h>


int main() {
  
  // Live long and prosper
  srand (time(NULL));
  
    int computer = rand() % 3 + 1;

    int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

std::cin >> user;
    if (user < 1 || user > 3) {
        std::cout << "Invalid input. Please enter 1, 2, or 3.\n";
        return 1;
    }

    std::cout << "You chose: ";
    if (user == 1) {
        std::cout << "✊\n";
    } else if (user == 2) {
        std::cout << "✋\n";
    } else {
        std::cout << "✌️\n";
    }

    std::cout << "Computer chose: ";
    if (computer == 1) {
        std::cout << "✊\n";
    } else if (computer == 2) {
        std::cout << "✋\n";
    } else {
        std::cout << "✌️\n";
    }

    if (user == computer) {
        std::cout << "It's a tie!\n";
    } else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "You lose!\n";
    }

    return 0;

}

#include <iostream>
#include <string>
#include <algorithm>

struct response {
    char letter;
    std::string response;
};

int main() {
    // Define an array of LetterResponse structs
    response letters[3] = {
     {'g', "GodMode"},
     {'r', "Run Speed"},
     {'s', "Suicide"}
    };

    // Prompt the user to input a letter
    std::cout << "Enter a letter: ";
    char inputLetter;
    std::cin >> inputLetter;

    // Convert the input letter to uppercase or lowercase
    inputLetter = std::tolower(inputLetter); 

    // Search the array for the lowercase or uppercase input letter and output its response
    bool foundLetter = false;
    for (int i = 0; i < sizeof(letters); i++) {
        if (std::tolower(letters[i].letter) == inputLetter) { 
            std::cout << letters[i].response << std::endl;
            foundLetter = true;
            break;
        }
    }

    // If the input letter is not found in the array, output an error message
    if (!foundLetter) {
        std::cout << "Input not found." << std::endl;
    }
}

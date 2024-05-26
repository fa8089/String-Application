#include <iostream>
#include <string>

int main() {
    std::string input1, input2, result;

    for (int i = 0; i < 3; i++) {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, input1);

        std::cout << "Enter the second name: ";
        std::getline(std::cin, input2);

        std::string result = input1 + " " + input2;
        std::cout << "The full name is: " << result << std::endl;
    }

    return 0;
}

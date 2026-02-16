#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::vector<std::pair<int, int>> cases = {{7, 3}, {-7, 3}, {7, -3}, {-7, -3}};

    std::cout << std::left << std::setw(12) << "Expression" << " | Result" << std::endl;
    std::cout << "--------------------" << std::endl;

    for (auto const& [a, b] : cases) {
        std::cout << std::right << std::setw(2) << a << " % " 
                  << std::setw(2) << b << "      | " 
                  << std::setw(2) << (a % b) << std::endl;
    }
    return 0;
}
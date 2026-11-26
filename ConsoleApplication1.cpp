#include <iostream>
#include <algorithm>

int questScore(int solved, int bonus, int mistakes) {
    return std::max(0, 10 * solved + bonus - 5 * mistakes);
}

int main() {
    std::cout << questScore(5, 10, 2) << "\n";  
    std::cout << questScore(1, 0, 5) << "\n";  
    std::cout << questScore(0, 3, 0) << "\n";  
}

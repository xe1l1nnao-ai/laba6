#include <iostream>

int entryFee(int players, int price) {
    if (players < 0 || price < 0) return -1;
    return players * price;
}

int entryFee(int players, int price, bool studentTeam) {
    if (players < 0 || price < 0) return -1;
    int total = players * price;
    if (studentTeam) total = total * 80 / 100;
    return total;
}

int main() {
    std::cout << entryFee(10, 200) << "\n";  // 2000
    std::cout << entryFee(10, 200, true) << "\n";  // 1600
    std::cout << entryFee(-5, 200) << "\n";  // -1
}

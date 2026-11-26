#include <iostream>

int teamTicket(int players, int perPerson = 15, int groupDiscount = 10) {
    if (players < 0 || perPerson < 0 || groupDiscount < 0 || groupDiscount > 100)
        return -1;
    int total = players * perPerson;
    if (players >= 4) total = total * (100 - groupDiscount) / 100;
    return total;
}

int main() {
    std::cout << teamTicket(3) << "\n";  
    std::cout << teamTicket(5) << "\n";  
    std::cout << teamTicket(5, 20, 50) << "\n";  
    std::cout << teamTicket(5, 20, 150) << "\n";  
}
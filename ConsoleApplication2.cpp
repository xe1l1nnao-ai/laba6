#include <iostream>

bool unlockHint(int& tokens, int& hintsUsed) {
    if (tokens >= 2) {
        tokens -= 2;
        ++hintsUsed;
        return true;
    }
    return false;
}

int main() {
    int tokens = 5, hints = 0;
    std::cout << std::boolalpha;
    std::cout << unlockHint(tokens, hints) << " tokens=" << tokens << " hints=" << hints << "\n";
    std::cout << unlockHint(tokens, hints) << " tokens=" << tokens << " hints=" << hints << "\n";
    std::cout << unlockHint(tokens, hints) << " tokens=" << tokens << " hints=" << hints << "\n";
}

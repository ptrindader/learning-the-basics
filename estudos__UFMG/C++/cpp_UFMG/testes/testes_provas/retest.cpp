#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    std::vector<int> v = {1, 2, 3};
    try {
        int x = v.at(10); // Lança std::out_of_range
    } 
    
    catch (const std::out_of_range& e) {
        std::cerr << "Erro: " << e.what() << '\n';
    }
}
